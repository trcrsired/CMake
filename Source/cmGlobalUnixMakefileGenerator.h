/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Insight Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef cmGlobalUnixMakefileGenerator_h
#define cmGlobalUnixMakefileGenerator_h

#include "cmGlobalGenerator.h"

/** \class cmGlobalUnixMakefileGenerator
 * \brief Write a Unix makefiles.
 *
 * cmGlobalUnixMakefileGenerator manages UNIX build process for a tree
 */
class cmGlobalUnixMakefileGenerator : public cmGlobalGenerator
{
public:
  ///! Get the name for the generator.
  virtual const char* GetName() {
    return cmGlobalUnixMakefileGenerator::GetActualName();}
  static const char* GetActualName() {return "Unix Makefiles";}

  ///! Create a local generator appropriate to this Global Generator
  virtual cmLocalGenerator *CreateLocalGenerator();

  /**
   * Try to determine system infomation such as shared library
   * extension, pthreads, byte order etc.  
   */
  virtual void EnableLanguage(const char*, cmMakefile *mf);

};

#endif
