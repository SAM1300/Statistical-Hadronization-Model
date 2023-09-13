// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIsanketdIDesktopdITHERMUSmImasterdImaindIClassesDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/sanket/Desktop/THERMUS-master/main/TTMParticle.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMDecay.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMParticleSet.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMParameter.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMParameterSet.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMParameterSetBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMParameterSetBQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMParameterSetCanBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalParticle.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalParticleBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalParticleBQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalParticleCanBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalModel.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMYield.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMDensObj.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalModelBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalModelBQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalModelCanBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalFit.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalFitBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalFitBQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TThermalFitCanBSQ.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMIDObj.h"
#include "/home/sanket/Desktop/THERMUS-master/main/TTMDecayChannel.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TTMParticle(void *p = 0);
   static void *newArray_TTMParticle(Long_t size, void *p);
   static void delete_TTMParticle(void *p);
   static void deleteArray_TTMParticle(void *p);
   static void destruct_TTMParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMParticle*)
   {
      ::TTMParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMParticle", ::TTMParticle::Class_Version(), "TTMParticle.h", 33,
                  typeid(::TTMParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TTMParticle) );
      instance.SetNew(&new_TTMParticle);
      instance.SetNewArray(&newArray_TTMParticle);
      instance.SetDelete(&delete_TTMParticle);
      instance.SetDeleteArray(&deleteArray_TTMParticle);
      instance.SetDestructor(&destruct_TTMParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMParticle*)
   {
      return GenerateInitInstanceLocal((::TTMParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMDecay(void *p = 0);
   static void *newArray_TTMDecay(Long_t size, void *p);
   static void delete_TTMDecay(void *p);
   static void deleteArray_TTMDecay(void *p);
   static void destruct_TTMDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMDecay*)
   {
      ::TTMDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMDecay", ::TTMDecay::Class_Version(), "TTMDecay.h", 26,
                  typeid(::TTMDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMDecay::Dictionary, isa_proxy, 4,
                  sizeof(::TTMDecay) );
      instance.SetNew(&new_TTMDecay);
      instance.SetNewArray(&newArray_TTMDecay);
      instance.SetDelete(&delete_TTMDecay);
      instance.SetDeleteArray(&deleteArray_TTMDecay);
      instance.SetDestructor(&destruct_TTMDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMDecay*)
   {
      return GenerateInitInstanceLocal((::TTMDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMParticleSet(void *p = 0);
   static void *newArray_TTMParticleSet(Long_t size, void *p);
   static void delete_TTMParticleSet(void *p);
   static void deleteArray_TTMParticleSet(void *p);
   static void destruct_TTMParticleSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMParticleSet*)
   {
      ::TTMParticleSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMParticleSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMParticleSet", ::TTMParticleSet::Class_Version(), "TTMParticleSet.h", 39,
                  typeid(::TTMParticleSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMParticleSet::Dictionary, isa_proxy, 4,
                  sizeof(::TTMParticleSet) );
      instance.SetNew(&new_TTMParticleSet);
      instance.SetNewArray(&newArray_TTMParticleSet);
      instance.SetDelete(&delete_TTMParticleSet);
      instance.SetDeleteArray(&deleteArray_TTMParticleSet);
      instance.SetDestructor(&destruct_TTMParticleSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMParticleSet*)
   {
      return GenerateInitInstanceLocal((::TTMParticleSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMParticleSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMParameter(void *p = 0);
   static void *newArray_TTMParameter(Long_t size, void *p);
   static void delete_TTMParameter(void *p);
   static void deleteArray_TTMParameter(void *p);
   static void destruct_TTMParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMParameter*)
   {
      ::TTMParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMParameter", ::TTMParameter::Class_Version(), "TTMParameter.h", 24,
                  typeid(::TTMParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMParameter::Dictionary, isa_proxy, 4,
                  sizeof(::TTMParameter) );
      instance.SetNew(&new_TTMParameter);
      instance.SetNewArray(&newArray_TTMParameter);
      instance.SetDelete(&delete_TTMParameter);
      instance.SetDeleteArray(&deleteArray_TTMParameter);
      instance.SetDestructor(&destruct_TTMParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMParameter*)
   {
      return GenerateInitInstanceLocal((::TTMParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTMParameterSet(void *p);
   static void deleteArray_TTMParameterSet(void *p);
   static void destruct_TTMParameterSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMParameterSet*)
   {
      ::TTMParameterSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMParameterSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMParameterSet", ::TTMParameterSet::Class_Version(), "TTMParameterSet.h", 27,
                  typeid(::TTMParameterSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMParameterSet::Dictionary, isa_proxy, 4,
                  sizeof(::TTMParameterSet) );
      instance.SetDelete(&delete_TTMParameterSet);
      instance.SetDeleteArray(&deleteArray_TTMParameterSet);
      instance.SetDestructor(&destruct_TTMParameterSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMParameterSet*)
   {
      return GenerateInitInstanceLocal((::TTMParameterSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMParameterSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMParameterSetBSQ(void *p = 0);
   static void *newArray_TTMParameterSetBSQ(Long_t size, void *p);
   static void delete_TTMParameterSetBSQ(void *p);
   static void deleteArray_TTMParameterSetBSQ(void *p);
   static void destruct_TTMParameterSetBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMParameterSetBSQ*)
   {
      ::TTMParameterSetBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMParameterSetBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMParameterSetBSQ", ::TTMParameterSetBSQ::Class_Version(), "TTMParameterSetBSQ.h", 48,
                  typeid(::TTMParameterSetBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMParameterSetBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMParameterSetBSQ) );
      instance.SetNew(&new_TTMParameterSetBSQ);
      instance.SetNewArray(&newArray_TTMParameterSetBSQ);
      instance.SetDelete(&delete_TTMParameterSetBSQ);
      instance.SetDeleteArray(&deleteArray_TTMParameterSetBSQ);
      instance.SetDestructor(&destruct_TTMParameterSetBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMParameterSetBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMParameterSetBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMParameterSetBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMParameterSetBQ(void *p = 0);
   static void *newArray_TTMParameterSetBQ(Long_t size, void *p);
   static void delete_TTMParameterSetBQ(void *p);
   static void deleteArray_TTMParameterSetBQ(void *p);
   static void destruct_TTMParameterSetBQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMParameterSetBQ*)
   {
      ::TTMParameterSetBQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMParameterSetBQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMParameterSetBQ", ::TTMParameterSetBQ::Class_Version(), "TTMParameterSetBQ.h", 42,
                  typeid(::TTMParameterSetBQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMParameterSetBQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMParameterSetBQ) );
      instance.SetNew(&new_TTMParameterSetBQ);
      instance.SetNewArray(&newArray_TTMParameterSetBQ);
      instance.SetDelete(&delete_TTMParameterSetBQ);
      instance.SetDeleteArray(&deleteArray_TTMParameterSetBQ);
      instance.SetDestructor(&destruct_TTMParameterSetBQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMParameterSetBQ*)
   {
      return GenerateInitInstanceLocal((::TTMParameterSetBQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMParameterSetBQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMParameterSetCanBSQ(void *p = 0);
   static void *newArray_TTMParameterSetCanBSQ(Long_t size, void *p);
   static void delete_TTMParameterSetCanBSQ(void *p);
   static void deleteArray_TTMParameterSetCanBSQ(void *p);
   static void destruct_TTMParameterSetCanBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMParameterSetCanBSQ*)
   {
      ::TTMParameterSetCanBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMParameterSetCanBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMParameterSetCanBSQ", ::TTMParameterSetCanBSQ::Class_Version(), "TTMParameterSetCanBSQ.h", 40,
                  typeid(::TTMParameterSetCanBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMParameterSetCanBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMParameterSetCanBSQ) );
      instance.SetNew(&new_TTMParameterSetCanBSQ);
      instance.SetNewArray(&newArray_TTMParameterSetCanBSQ);
      instance.SetDelete(&delete_TTMParameterSetCanBSQ);
      instance.SetDeleteArray(&deleteArray_TTMParameterSetCanBSQ);
      instance.SetDestructor(&destruct_TTMParameterSetCanBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMParameterSetCanBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMParameterSetCanBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMParameterSetCanBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTMThermalParticle(void *p);
   static void deleteArray_TTMThermalParticle(void *p);
   static void destruct_TTMThermalParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalParticle*)
   {
      ::TTMThermalParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalParticle", ::TTMThermalParticle::Class_Version(), "TThermalParticle.h", 28,
                  typeid(::TTMThermalParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalParticle::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalParticle) );
      instance.SetDelete(&delete_TTMThermalParticle);
      instance.SetDeleteArray(&deleteArray_TTMThermalParticle);
      instance.SetDestructor(&destruct_TTMThermalParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalParticle*)
   {
      return GenerateInitInstanceLocal((::TTMThermalParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalParticleBSQ(void *p = 0);
   static void *newArray_TTMThermalParticleBSQ(Long_t size, void *p);
   static void delete_TTMThermalParticleBSQ(void *p);
   static void deleteArray_TTMThermalParticleBSQ(void *p);
   static void destruct_TTMThermalParticleBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalParticleBSQ*)
   {
      ::TTMThermalParticleBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalParticleBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalParticleBSQ", ::TTMThermalParticleBSQ::Class_Version(), "TThermalParticleBSQ.h", 29,
                  typeid(::TTMThermalParticleBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalParticleBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalParticleBSQ) );
      instance.SetNew(&new_TTMThermalParticleBSQ);
      instance.SetNewArray(&newArray_TTMThermalParticleBSQ);
      instance.SetDelete(&delete_TTMThermalParticleBSQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalParticleBSQ);
      instance.SetDestructor(&destruct_TTMThermalParticleBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalParticleBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalParticleBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalParticleBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalParticleBQ(void *p = 0);
   static void *newArray_TTMThermalParticleBQ(Long_t size, void *p);
   static void delete_TTMThermalParticleBQ(void *p);
   static void deleteArray_TTMThermalParticleBQ(void *p);
   static void destruct_TTMThermalParticleBQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalParticleBQ*)
   {
      ::TTMThermalParticleBQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalParticleBQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalParticleBQ", ::TTMThermalParticleBQ::Class_Version(), "TThermalParticleBQ.h", 34,
                  typeid(::TTMThermalParticleBQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalParticleBQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalParticleBQ) );
      instance.SetNew(&new_TTMThermalParticleBQ);
      instance.SetNewArray(&newArray_TTMThermalParticleBQ);
      instance.SetDelete(&delete_TTMThermalParticleBQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalParticleBQ);
      instance.SetDestructor(&destruct_TTMThermalParticleBQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalParticleBQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalParticleBQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalParticleBQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalParticleCanBSQ(void *p = 0);
   static void *newArray_TTMThermalParticleCanBSQ(Long_t size, void *p);
   static void delete_TTMThermalParticleCanBSQ(void *p);
   static void deleteArray_TTMThermalParticleCanBSQ(void *p);
   static void destruct_TTMThermalParticleCanBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalParticleCanBSQ*)
   {
      ::TTMThermalParticleCanBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalParticleCanBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalParticleCanBSQ", ::TTMThermalParticleCanBSQ::Class_Version(), "TThermalParticleCanBSQ.h", 34,
                  typeid(::TTMThermalParticleCanBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalParticleCanBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalParticleCanBSQ) );
      instance.SetNew(&new_TTMThermalParticleCanBSQ);
      instance.SetNewArray(&newArray_TTMThermalParticleCanBSQ);
      instance.SetDelete(&delete_TTMThermalParticleCanBSQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalParticleCanBSQ);
      instance.SetDestructor(&destruct_TTMThermalParticleCanBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalParticleCanBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalParticleCanBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalParticleCanBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMDensObj(void *p = 0);
   static void *newArray_TTMDensObj(Long_t size, void *p);
   static void delete_TTMDensObj(void *p);
   static void deleteArray_TTMDensObj(void *p);
   static void destruct_TTMDensObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMDensObj*)
   {
      ::TTMDensObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMDensObj >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMDensObj", ::TTMDensObj::Class_Version(), "TTMDensObj.h", 24,
                  typeid(::TTMDensObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMDensObj::Dictionary, isa_proxy, 4,
                  sizeof(::TTMDensObj) );
      instance.SetNew(&new_TTMDensObj);
      instance.SetNewArray(&newArray_TTMDensObj);
      instance.SetDelete(&delete_TTMDensObj);
      instance.SetDeleteArray(&deleteArray_TTMDensObj);
      instance.SetDestructor(&destruct_TTMDensObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMDensObj*)
   {
      return GenerateInitInstanceLocal((::TTMDensObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMDensObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTMThermalModel(void *p);
   static void deleteArray_TTMThermalModel(void *p);
   static void destruct_TTMThermalModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalModel*)
   {
      ::TTMThermalModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalModel", ::TTMThermalModel::Class_Version(), "TThermalModel.h", 46,
                  typeid(::TTMThermalModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalModel::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalModel) );
      instance.SetDelete(&delete_TTMThermalModel);
      instance.SetDeleteArray(&deleteArray_TTMThermalModel);
      instance.SetDestructor(&destruct_TTMThermalModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalModel*)
   {
      return GenerateInitInstanceLocal((::TTMThermalModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMYield(void *p = 0);
   static void *newArray_TTMYield(Long_t size, void *p);
   static void delete_TTMYield(void *p);
   static void deleteArray_TTMYield(void *p);
   static void destruct_TTMYield(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMYield*)
   {
      ::TTMYield *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMYield >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMYield", ::TTMYield::Class_Version(), "TTMYield.h", 31,
                  typeid(::TTMYield), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMYield::Dictionary, isa_proxy, 4,
                  sizeof(::TTMYield) );
      instance.SetNew(&new_TTMYield);
      instance.SetNewArray(&newArray_TTMYield);
      instance.SetDelete(&delete_TTMYield);
      instance.SetDeleteArray(&deleteArray_TTMYield);
      instance.SetDestructor(&destruct_TTMYield);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMYield*)
   {
      return GenerateInitInstanceLocal((::TTMYield*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMYield*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalModelBSQ(void *p = 0);
   static void *newArray_TTMThermalModelBSQ(Long_t size, void *p);
   static void delete_TTMThermalModelBSQ(void *p);
   static void deleteArray_TTMThermalModelBSQ(void *p);
   static void destruct_TTMThermalModelBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalModelBSQ*)
   {
      ::TTMThermalModelBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalModelBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalModelBSQ", ::TTMThermalModelBSQ::Class_Version(), "TThermalModelBSQ.h", 28,
                  typeid(::TTMThermalModelBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalModelBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalModelBSQ) );
      instance.SetNew(&new_TTMThermalModelBSQ);
      instance.SetNewArray(&newArray_TTMThermalModelBSQ);
      instance.SetDelete(&delete_TTMThermalModelBSQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalModelBSQ);
      instance.SetDestructor(&destruct_TTMThermalModelBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalModelBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalModelBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalModelBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalModelBQ(void *p = 0);
   static void *newArray_TTMThermalModelBQ(Long_t size, void *p);
   static void delete_TTMThermalModelBQ(void *p);
   static void deleteArray_TTMThermalModelBQ(void *p);
   static void destruct_TTMThermalModelBQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalModelBQ*)
   {
      ::TTMThermalModelBQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalModelBQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalModelBQ", ::TTMThermalModelBQ::Class_Version(), "TThermalModelBQ.h", 28,
                  typeid(::TTMThermalModelBQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalModelBQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalModelBQ) );
      instance.SetNew(&new_TTMThermalModelBQ);
      instance.SetNewArray(&newArray_TTMThermalModelBQ);
      instance.SetDelete(&delete_TTMThermalModelBQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalModelBQ);
      instance.SetDestructor(&destruct_TTMThermalModelBQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalModelBQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalModelBQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalModelBQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalModelCanBSQ(void *p = 0);
   static void *newArray_TTMThermalModelCanBSQ(Long_t size, void *p);
   static void delete_TTMThermalModelCanBSQ(void *p);
   static void deleteArray_TTMThermalModelCanBSQ(void *p);
   static void destruct_TTMThermalModelCanBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalModelCanBSQ*)
   {
      ::TTMThermalModelCanBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalModelCanBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalModelCanBSQ", ::TTMThermalModelCanBSQ::Class_Version(), "TThermalModelCanBSQ.h", 33,
                  typeid(::TTMThermalModelCanBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalModelCanBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalModelCanBSQ) );
      instance.SetNew(&new_TTMThermalModelCanBSQ);
      instance.SetNewArray(&newArray_TTMThermalModelCanBSQ);
      instance.SetDelete(&delete_TTMThermalModelCanBSQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalModelCanBSQ);
      instance.SetDestructor(&destruct_TTMThermalModelCanBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalModelCanBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalModelCanBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalModelCanBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTMThermalFit(void *p);
   static void deleteArray_TTMThermalFit(void *p);
   static void destruct_TTMThermalFit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalFit*)
   {
      ::TTMThermalFit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalFit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalFit", ::TTMThermalFit::Class_Version(), "TThermalFit.h", 41,
                  typeid(::TTMThermalFit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalFit::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalFit) );
      instance.SetDelete(&delete_TTMThermalFit);
      instance.SetDeleteArray(&deleteArray_TTMThermalFit);
      instance.SetDestructor(&destruct_TTMThermalFit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalFit*)
   {
      return GenerateInitInstanceLocal((::TTMThermalFit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalFit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalFitBSQ(void *p = 0);
   static void *newArray_TTMThermalFitBSQ(Long_t size, void *p);
   static void delete_TTMThermalFitBSQ(void *p);
   static void deleteArray_TTMThermalFitBSQ(void *p);
   static void destruct_TTMThermalFitBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalFitBSQ*)
   {
      ::TTMThermalFitBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalFitBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalFitBSQ", ::TTMThermalFitBSQ::Class_Version(), "TThermalFitBSQ.h", 36,
                  typeid(::TTMThermalFitBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalFitBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalFitBSQ) );
      instance.SetNew(&new_TTMThermalFitBSQ);
      instance.SetNewArray(&newArray_TTMThermalFitBSQ);
      instance.SetDelete(&delete_TTMThermalFitBSQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalFitBSQ);
      instance.SetDestructor(&destruct_TTMThermalFitBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalFitBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalFitBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalFitBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalFitBQ(void *p = 0);
   static void *newArray_TTMThermalFitBQ(Long_t size, void *p);
   static void delete_TTMThermalFitBQ(void *p);
   static void deleteArray_TTMThermalFitBQ(void *p);
   static void destruct_TTMThermalFitBQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalFitBQ*)
   {
      ::TTMThermalFitBQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalFitBQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalFitBQ", ::TTMThermalFitBQ::Class_Version(), "TThermalFitBQ.h", 37,
                  typeid(::TTMThermalFitBQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalFitBQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalFitBQ) );
      instance.SetNew(&new_TTMThermalFitBQ);
      instance.SetNewArray(&newArray_TTMThermalFitBQ);
      instance.SetDelete(&delete_TTMThermalFitBQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalFitBQ);
      instance.SetDestructor(&destruct_TTMThermalFitBQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalFitBQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalFitBQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalFitBQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMThermalFitCanBSQ(void *p = 0);
   static void *newArray_TTMThermalFitCanBSQ(Long_t size, void *p);
   static void delete_TTMThermalFitCanBSQ(void *p);
   static void deleteArray_TTMThermalFitCanBSQ(void *p);
   static void destruct_TTMThermalFitCanBSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMThermalFitCanBSQ*)
   {
      ::TTMThermalFitCanBSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMThermalFitCanBSQ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMThermalFitCanBSQ", ::TTMThermalFitCanBSQ::Class_Version(), "TThermalFitCanBSQ.h", 36,
                  typeid(::TTMThermalFitCanBSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMThermalFitCanBSQ::Dictionary, isa_proxy, 4,
                  sizeof(::TTMThermalFitCanBSQ) );
      instance.SetNew(&new_TTMThermalFitCanBSQ);
      instance.SetNewArray(&newArray_TTMThermalFitCanBSQ);
      instance.SetDelete(&delete_TTMThermalFitCanBSQ);
      instance.SetDeleteArray(&deleteArray_TTMThermalFitCanBSQ);
      instance.SetDestructor(&destruct_TTMThermalFitCanBSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMThermalFitCanBSQ*)
   {
      return GenerateInitInstanceLocal((::TTMThermalFitCanBSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMThermalFitCanBSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMIDObj(void *p = 0);
   static void *newArray_TTMIDObj(Long_t size, void *p);
   static void delete_TTMIDObj(void *p);
   static void deleteArray_TTMIDObj(void *p);
   static void destruct_TTMIDObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMIDObj*)
   {
      ::TTMIDObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMIDObj >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMIDObj", ::TTMIDObj::Class_Version(), "TTMIDObj.h", 24,
                  typeid(::TTMIDObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMIDObj::Dictionary, isa_proxy, 4,
                  sizeof(::TTMIDObj) );
      instance.SetNew(&new_TTMIDObj);
      instance.SetNewArray(&newArray_TTMIDObj);
      instance.SetDelete(&delete_TTMIDObj);
      instance.SetDeleteArray(&deleteArray_TTMIDObj);
      instance.SetDestructor(&destruct_TTMIDObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMIDObj*)
   {
      return GenerateInitInstanceLocal((::TTMIDObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMIDObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTMDecayChannel(void *p = 0);
   static void *newArray_TTMDecayChannel(Long_t size, void *p);
   static void delete_TTMDecayChannel(void *p);
   static void deleteArray_TTMDecayChannel(void *p);
   static void destruct_TTMDecayChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTMDecayChannel*)
   {
      ::TTMDecayChannel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTMDecayChannel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTMDecayChannel", ::TTMDecayChannel::Class_Version(), "TTMDecayChannel.h", 26,
                  typeid(::TTMDecayChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTMDecayChannel::Dictionary, isa_proxy, 4,
                  sizeof(::TTMDecayChannel) );
      instance.SetNew(&new_TTMDecayChannel);
      instance.SetNewArray(&newArray_TTMDecayChannel);
      instance.SetDelete(&delete_TTMDecayChannel);
      instance.SetDeleteArray(&deleteArray_TTMDecayChannel);
      instance.SetDestructor(&destruct_TTMDecayChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTMDecayChannel*)
   {
      return GenerateInitInstanceLocal((::TTMDecayChannel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTMDecayChannel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TTMParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMParticle::Class_Name()
{
   return "TTMParticle";
}

//______________________________________________________________________________
const char *TTMParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMDecay::Class_Name()
{
   return "TTMDecay";
}

//______________________________________________________________________________
const char *TTMDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMParticleSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMParticleSet::Class_Name()
{
   return "TTMParticleSet";
}

//______________________________________________________________________________
const char *TTMParticleSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParticleSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMParticleSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParticleSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMParticleSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParticleSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMParticleSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParticleSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMParameter::Class_Name()
{
   return "TTMParameter";
}

//______________________________________________________________________________
const char *TTMParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMParameterSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMParameterSet::Class_Name()
{
   return "TTMParameterSet";
}

//______________________________________________________________________________
const char *TTMParameterSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMParameterSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMParameterSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMParameterSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMParameterSetBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMParameterSetBSQ::Class_Name()
{
   return "TTMParameterSetBSQ";
}

//______________________________________________________________________________
const char *TTMParameterSetBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMParameterSetBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMParameterSetBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMParameterSetBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMParameterSetBQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMParameterSetBQ::Class_Name()
{
   return "TTMParameterSetBQ";
}

//______________________________________________________________________________
const char *TTMParameterSetBQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMParameterSetBQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMParameterSetBQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMParameterSetBQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetBQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMParameterSetCanBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMParameterSetCanBSQ::Class_Name()
{
   return "TTMParameterSetCanBSQ";
}

//______________________________________________________________________________
const char *TTMParameterSetCanBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetCanBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMParameterSetCanBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetCanBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMParameterSetCanBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetCanBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMParameterSetCanBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMParameterSetCanBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalParticle::Class_Name()
{
   return "TTMThermalParticle";
}

//______________________________________________________________________________
const char *TTMThermalParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalParticleBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalParticleBSQ::Class_Name()
{
   return "TTMThermalParticleBSQ";
}

//______________________________________________________________________________
const char *TTMThermalParticleBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalParticleBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalParticleBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalParticleBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalParticleBQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalParticleBQ::Class_Name()
{
   return "TTMThermalParticleBQ";
}

//______________________________________________________________________________
const char *TTMThermalParticleBQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalParticleBQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalParticleBQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalParticleBQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleBQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalParticleCanBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalParticleCanBSQ::Class_Name()
{
   return "TTMThermalParticleCanBSQ";
}

//______________________________________________________________________________
const char *TTMThermalParticleCanBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleCanBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalParticleCanBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleCanBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalParticleCanBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleCanBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalParticleCanBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalParticleCanBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMDensObj::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMDensObj::Class_Name()
{
   return "TTMDensObj";
}

//______________________________________________________________________________
const char *TTMDensObj::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMDensObj*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMDensObj::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMDensObj*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMDensObj::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMDensObj*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMDensObj::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMDensObj*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalModel::Class_Name()
{
   return "TTMThermalModel";
}

//______________________________________________________________________________
const char *TTMThermalModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMYield::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMYield::Class_Name()
{
   return "TTMYield";
}

//______________________________________________________________________________
const char *TTMYield::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMYield*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMYield::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMYield*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMYield::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMYield*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMYield::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMYield*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalModelBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalModelBSQ::Class_Name()
{
   return "TTMThermalModelBSQ";
}

//______________________________________________________________________________
const char *TTMThermalModelBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalModelBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalModelBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalModelBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalModelBQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalModelBQ::Class_Name()
{
   return "TTMThermalModelBQ";
}

//______________________________________________________________________________
const char *TTMThermalModelBQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalModelBQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalModelBQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalModelBQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelBQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalModelCanBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalModelCanBSQ::Class_Name()
{
   return "TTMThermalModelCanBSQ";
}

//______________________________________________________________________________
const char *TTMThermalModelCanBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelCanBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalModelCanBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelCanBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalModelCanBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelCanBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalModelCanBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalModelCanBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalFit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalFit::Class_Name()
{
   return "TTMThermalFit";
}

//______________________________________________________________________________
const char *TTMThermalFit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalFit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalFit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalFit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalFitBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalFitBSQ::Class_Name()
{
   return "TTMThermalFitBSQ";
}

//______________________________________________________________________________
const char *TTMThermalFitBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalFitBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalFitBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalFitBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalFitBQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalFitBQ::Class_Name()
{
   return "TTMThermalFitBQ";
}

//______________________________________________________________________________
const char *TTMThermalFitBQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalFitBQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalFitBQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalFitBQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitBQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMThermalFitCanBSQ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMThermalFitCanBSQ::Class_Name()
{
   return "TTMThermalFitCanBSQ";
}

//______________________________________________________________________________
const char *TTMThermalFitCanBSQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitCanBSQ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMThermalFitCanBSQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitCanBSQ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMThermalFitCanBSQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitCanBSQ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMThermalFitCanBSQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMThermalFitCanBSQ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMIDObj::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMIDObj::Class_Name()
{
   return "TTMIDObj";
}

//______________________________________________________________________________
const char *TTMIDObj::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMIDObj*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMIDObj::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMIDObj*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMIDObj::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMIDObj*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMIDObj::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMIDObj*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTMDecayChannel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTMDecayChannel::Class_Name()
{
   return "TTMDecayChannel";
}

//______________________________________________________________________________
const char *TTMDecayChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMDecayChannel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTMDecayChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTMDecayChannel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTMDecayChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMDecayChannel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTMDecayChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTMDecayChannel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TTMParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMParticle(void *p) {
      return  p ? new(p) ::TTMParticle : new ::TTMParticle;
   }
   static void *newArray_TTMParticle(Long_t nElements, void *p) {
      return p ? new(p) ::TTMParticle[nElements] : new ::TTMParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMParticle(void *p) {
      delete ((::TTMParticle*)p);
   }
   static void deleteArray_TTMParticle(void *p) {
      delete [] ((::TTMParticle*)p);
   }
   static void destruct_TTMParticle(void *p) {
      typedef ::TTMParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMParticle

//______________________________________________________________________________
void TTMDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMDecay(void *p) {
      return  p ? new(p) ::TTMDecay : new ::TTMDecay;
   }
   static void *newArray_TTMDecay(Long_t nElements, void *p) {
      return p ? new(p) ::TTMDecay[nElements] : new ::TTMDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMDecay(void *p) {
      delete ((::TTMDecay*)p);
   }
   static void deleteArray_TTMDecay(void *p) {
      delete [] ((::TTMDecay*)p);
   }
   static void destruct_TTMDecay(void *p) {
      typedef ::TTMDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMDecay

//______________________________________________________________________________
void TTMParticleSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMParticleSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMParticleSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMParticleSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMParticleSet(void *p) {
      return  p ? new(p) ::TTMParticleSet : new ::TTMParticleSet;
   }
   static void *newArray_TTMParticleSet(Long_t nElements, void *p) {
      return p ? new(p) ::TTMParticleSet[nElements] : new ::TTMParticleSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMParticleSet(void *p) {
      delete ((::TTMParticleSet*)p);
   }
   static void deleteArray_TTMParticleSet(void *p) {
      delete [] ((::TTMParticleSet*)p);
   }
   static void destruct_TTMParticleSet(void *p) {
      typedef ::TTMParticleSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMParticleSet

//______________________________________________________________________________
void TTMParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMParameter(void *p) {
      return  p ? new(p) ::TTMParameter : new ::TTMParameter;
   }
   static void *newArray_TTMParameter(Long_t nElements, void *p) {
      return p ? new(p) ::TTMParameter[nElements] : new ::TTMParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMParameter(void *p) {
      delete ((::TTMParameter*)p);
   }
   static void deleteArray_TTMParameter(void *p) {
      delete [] ((::TTMParameter*)p);
   }
   static void destruct_TTMParameter(void *p) {
      typedef ::TTMParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMParameter

//______________________________________________________________________________
void TTMParameterSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMParameterSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMParameterSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMParameterSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTMParameterSet(void *p) {
      delete ((::TTMParameterSet*)p);
   }
   static void deleteArray_TTMParameterSet(void *p) {
      delete [] ((::TTMParameterSet*)p);
   }
   static void destruct_TTMParameterSet(void *p) {
      typedef ::TTMParameterSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMParameterSet

//______________________________________________________________________________
void TTMParameterSetBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMParameterSetBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMParameterSetBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMParameterSetBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMParameterSetBSQ(void *p) {
      return  p ? new(p) ::TTMParameterSetBSQ : new ::TTMParameterSetBSQ;
   }
   static void *newArray_TTMParameterSetBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMParameterSetBSQ[nElements] : new ::TTMParameterSetBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMParameterSetBSQ(void *p) {
      delete ((::TTMParameterSetBSQ*)p);
   }
   static void deleteArray_TTMParameterSetBSQ(void *p) {
      delete [] ((::TTMParameterSetBSQ*)p);
   }
   static void destruct_TTMParameterSetBSQ(void *p) {
      typedef ::TTMParameterSetBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMParameterSetBSQ

//______________________________________________________________________________
void TTMParameterSetBQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMParameterSetBQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMParameterSetBQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMParameterSetBQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMParameterSetBQ(void *p) {
      return  p ? new(p) ::TTMParameterSetBQ : new ::TTMParameterSetBQ;
   }
   static void *newArray_TTMParameterSetBQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMParameterSetBQ[nElements] : new ::TTMParameterSetBQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMParameterSetBQ(void *p) {
      delete ((::TTMParameterSetBQ*)p);
   }
   static void deleteArray_TTMParameterSetBQ(void *p) {
      delete [] ((::TTMParameterSetBQ*)p);
   }
   static void destruct_TTMParameterSetBQ(void *p) {
      typedef ::TTMParameterSetBQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMParameterSetBQ

//______________________________________________________________________________
void TTMParameterSetCanBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMParameterSetCanBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMParameterSetCanBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMParameterSetCanBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMParameterSetCanBSQ(void *p) {
      return  p ? new(p) ::TTMParameterSetCanBSQ : new ::TTMParameterSetCanBSQ;
   }
   static void *newArray_TTMParameterSetCanBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMParameterSetCanBSQ[nElements] : new ::TTMParameterSetCanBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMParameterSetCanBSQ(void *p) {
      delete ((::TTMParameterSetCanBSQ*)p);
   }
   static void deleteArray_TTMParameterSetCanBSQ(void *p) {
      delete [] ((::TTMParameterSetCanBSQ*)p);
   }
   static void destruct_TTMParameterSetCanBSQ(void *p) {
      typedef ::TTMParameterSetCanBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMParameterSetCanBSQ

//______________________________________________________________________________
void TTMThermalParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTMThermalParticle(void *p) {
      delete ((::TTMThermalParticle*)p);
   }
   static void deleteArray_TTMThermalParticle(void *p) {
      delete [] ((::TTMThermalParticle*)p);
   }
   static void destruct_TTMThermalParticle(void *p) {
      typedef ::TTMThermalParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalParticle

//______________________________________________________________________________
void TTMThermalParticleBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalParticleBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalParticleBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalParticleBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalParticleBSQ(void *p) {
      return  p ? new(p) ::TTMThermalParticleBSQ : new ::TTMThermalParticleBSQ;
   }
   static void *newArray_TTMThermalParticleBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalParticleBSQ[nElements] : new ::TTMThermalParticleBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalParticleBSQ(void *p) {
      delete ((::TTMThermalParticleBSQ*)p);
   }
   static void deleteArray_TTMThermalParticleBSQ(void *p) {
      delete [] ((::TTMThermalParticleBSQ*)p);
   }
   static void destruct_TTMThermalParticleBSQ(void *p) {
      typedef ::TTMThermalParticleBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalParticleBSQ

//______________________________________________________________________________
void TTMThermalParticleBQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalParticleBQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalParticleBQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalParticleBQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalParticleBQ(void *p) {
      return  p ? new(p) ::TTMThermalParticleBQ : new ::TTMThermalParticleBQ;
   }
   static void *newArray_TTMThermalParticleBQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalParticleBQ[nElements] : new ::TTMThermalParticleBQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalParticleBQ(void *p) {
      delete ((::TTMThermalParticleBQ*)p);
   }
   static void deleteArray_TTMThermalParticleBQ(void *p) {
      delete [] ((::TTMThermalParticleBQ*)p);
   }
   static void destruct_TTMThermalParticleBQ(void *p) {
      typedef ::TTMThermalParticleBQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalParticleBQ

//______________________________________________________________________________
void TTMThermalParticleCanBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalParticleCanBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalParticleCanBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalParticleCanBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalParticleCanBSQ(void *p) {
      return  p ? new(p) ::TTMThermalParticleCanBSQ : new ::TTMThermalParticleCanBSQ;
   }
   static void *newArray_TTMThermalParticleCanBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalParticleCanBSQ[nElements] : new ::TTMThermalParticleCanBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalParticleCanBSQ(void *p) {
      delete ((::TTMThermalParticleCanBSQ*)p);
   }
   static void deleteArray_TTMThermalParticleCanBSQ(void *p) {
      delete [] ((::TTMThermalParticleCanBSQ*)p);
   }
   static void destruct_TTMThermalParticleCanBSQ(void *p) {
      typedef ::TTMThermalParticleCanBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalParticleCanBSQ

//______________________________________________________________________________
void TTMDensObj::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMDensObj.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMDensObj::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMDensObj::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMDensObj(void *p) {
      return  p ? new(p) ::TTMDensObj : new ::TTMDensObj;
   }
   static void *newArray_TTMDensObj(Long_t nElements, void *p) {
      return p ? new(p) ::TTMDensObj[nElements] : new ::TTMDensObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMDensObj(void *p) {
      delete ((::TTMDensObj*)p);
   }
   static void deleteArray_TTMDensObj(void *p) {
      delete [] ((::TTMDensObj*)p);
   }
   static void destruct_TTMDensObj(void *p) {
      typedef ::TTMDensObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMDensObj

//______________________________________________________________________________
void TTMThermalModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTMThermalModel(void *p) {
      delete ((::TTMThermalModel*)p);
   }
   static void deleteArray_TTMThermalModel(void *p) {
      delete [] ((::TTMThermalModel*)p);
   }
   static void destruct_TTMThermalModel(void *p) {
      typedef ::TTMThermalModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalModel

//______________________________________________________________________________
void TTMYield::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMYield.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMYield::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMYield::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMYield(void *p) {
      return  p ? new(p) ::TTMYield : new ::TTMYield;
   }
   static void *newArray_TTMYield(Long_t nElements, void *p) {
      return p ? new(p) ::TTMYield[nElements] : new ::TTMYield[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMYield(void *p) {
      delete ((::TTMYield*)p);
   }
   static void deleteArray_TTMYield(void *p) {
      delete [] ((::TTMYield*)p);
   }
   static void destruct_TTMYield(void *p) {
      typedef ::TTMYield current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMYield

//______________________________________________________________________________
void TTMThermalModelBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalModelBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalModelBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalModelBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalModelBSQ(void *p) {
      return  p ? new(p) ::TTMThermalModelBSQ : new ::TTMThermalModelBSQ;
   }
   static void *newArray_TTMThermalModelBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalModelBSQ[nElements] : new ::TTMThermalModelBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalModelBSQ(void *p) {
      delete ((::TTMThermalModelBSQ*)p);
   }
   static void deleteArray_TTMThermalModelBSQ(void *p) {
      delete [] ((::TTMThermalModelBSQ*)p);
   }
   static void destruct_TTMThermalModelBSQ(void *p) {
      typedef ::TTMThermalModelBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalModelBSQ

//______________________________________________________________________________
void TTMThermalModelBQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalModelBQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalModelBQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalModelBQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalModelBQ(void *p) {
      return  p ? new(p) ::TTMThermalModelBQ : new ::TTMThermalModelBQ;
   }
   static void *newArray_TTMThermalModelBQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalModelBQ[nElements] : new ::TTMThermalModelBQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalModelBQ(void *p) {
      delete ((::TTMThermalModelBQ*)p);
   }
   static void deleteArray_TTMThermalModelBQ(void *p) {
      delete [] ((::TTMThermalModelBQ*)p);
   }
   static void destruct_TTMThermalModelBQ(void *p) {
      typedef ::TTMThermalModelBQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalModelBQ

//______________________________________________________________________________
void TTMThermalModelCanBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalModelCanBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalModelCanBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalModelCanBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalModelCanBSQ(void *p) {
      return  p ? new(p) ::TTMThermalModelCanBSQ : new ::TTMThermalModelCanBSQ;
   }
   static void *newArray_TTMThermalModelCanBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalModelCanBSQ[nElements] : new ::TTMThermalModelCanBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalModelCanBSQ(void *p) {
      delete ((::TTMThermalModelCanBSQ*)p);
   }
   static void deleteArray_TTMThermalModelCanBSQ(void *p) {
      delete [] ((::TTMThermalModelCanBSQ*)p);
   }
   static void destruct_TTMThermalModelCanBSQ(void *p) {
      typedef ::TTMThermalModelCanBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalModelCanBSQ

//______________________________________________________________________________
void TTMThermalFit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalFit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalFit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalFit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTMThermalFit(void *p) {
      delete ((::TTMThermalFit*)p);
   }
   static void deleteArray_TTMThermalFit(void *p) {
      delete [] ((::TTMThermalFit*)p);
   }
   static void destruct_TTMThermalFit(void *p) {
      typedef ::TTMThermalFit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalFit

//______________________________________________________________________________
void TTMThermalFitBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalFitBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalFitBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalFitBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalFitBSQ(void *p) {
      return  p ? new(p) ::TTMThermalFitBSQ : new ::TTMThermalFitBSQ;
   }
   static void *newArray_TTMThermalFitBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalFitBSQ[nElements] : new ::TTMThermalFitBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalFitBSQ(void *p) {
      delete ((::TTMThermalFitBSQ*)p);
   }
   static void deleteArray_TTMThermalFitBSQ(void *p) {
      delete [] ((::TTMThermalFitBSQ*)p);
   }
   static void destruct_TTMThermalFitBSQ(void *p) {
      typedef ::TTMThermalFitBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalFitBSQ

//______________________________________________________________________________
void TTMThermalFitBQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalFitBQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalFitBQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalFitBQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalFitBQ(void *p) {
      return  p ? new(p) ::TTMThermalFitBQ : new ::TTMThermalFitBQ;
   }
   static void *newArray_TTMThermalFitBQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalFitBQ[nElements] : new ::TTMThermalFitBQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalFitBQ(void *p) {
      delete ((::TTMThermalFitBQ*)p);
   }
   static void deleteArray_TTMThermalFitBQ(void *p) {
      delete [] ((::TTMThermalFitBQ*)p);
   }
   static void destruct_TTMThermalFitBQ(void *p) {
      typedef ::TTMThermalFitBQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalFitBQ

//______________________________________________________________________________
void TTMThermalFitCanBSQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMThermalFitCanBSQ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMThermalFitCanBSQ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMThermalFitCanBSQ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMThermalFitCanBSQ(void *p) {
      return  p ? new(p) ::TTMThermalFitCanBSQ : new ::TTMThermalFitCanBSQ;
   }
   static void *newArray_TTMThermalFitCanBSQ(Long_t nElements, void *p) {
      return p ? new(p) ::TTMThermalFitCanBSQ[nElements] : new ::TTMThermalFitCanBSQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMThermalFitCanBSQ(void *p) {
      delete ((::TTMThermalFitCanBSQ*)p);
   }
   static void deleteArray_TTMThermalFitCanBSQ(void *p) {
      delete [] ((::TTMThermalFitCanBSQ*)p);
   }
   static void destruct_TTMThermalFitCanBSQ(void *p) {
      typedef ::TTMThermalFitCanBSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMThermalFitCanBSQ

//______________________________________________________________________________
void TTMIDObj::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMIDObj.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMIDObj::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMIDObj::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMIDObj(void *p) {
      return  p ? new(p) ::TTMIDObj : new ::TTMIDObj;
   }
   static void *newArray_TTMIDObj(Long_t nElements, void *p) {
      return p ? new(p) ::TTMIDObj[nElements] : new ::TTMIDObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMIDObj(void *p) {
      delete ((::TTMIDObj*)p);
   }
   static void deleteArray_TTMIDObj(void *p) {
      delete [] ((::TTMIDObj*)p);
   }
   static void destruct_TTMIDObj(void *p) {
      typedef ::TTMIDObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMIDObj

//______________________________________________________________________________
void TTMDecayChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTMDecayChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTMDecayChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTMDecayChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTMDecayChannel(void *p) {
      return  p ? new(p) ::TTMDecayChannel : new ::TTMDecayChannel;
   }
   static void *newArray_TTMDecayChannel(Long_t nElements, void *p) {
      return p ? new(p) ::TTMDecayChannel[nElements] : new ::TTMDecayChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTMDecayChannel(void *p) {
      delete ((::TTMDecayChannel*)p);
   }
   static void deleteArray_TTMDecayChannel(void *p) {
      delete [] ((::TTMDecayChannel*)p);
   }
   static void destruct_TTMDecayChannel(void *p) {
      typedef ::TTMDecayChannel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTMDecayChannel

namespace {
  void TriggerDictionaryInitialization_ClassesDict_Impl() {
    static const char* headers[] = {
"TTMParticle.h",
"TTMDecay.h",
"TTMParticleSet.h",
"TTMParameter.h",
"TTMParameterSet.h",
"TTMParameterSetBSQ.h",
"TTMParameterSetBQ.h",
"TTMParameterSetCanBSQ.h",
"TThermalParticle.h",
"TThermalParticleBSQ.h",
"TThermalParticleBQ.h",
"TThermalParticleCanBSQ.h",
"TThermalModel.h",
"TTMYield.h",
"TTMDensObj.h",
"TThermalModelBSQ.h",
"TThermalModelBQ.h",
"TThermalModelCanBSQ.h",
"TThermalFit.h",
"TThermalFitBSQ.h",
"TThermalFitBQ.h",
"TThermalFitCanBSQ.h",
"TTMIDObj.h",
"TTMDecayChannel.h",
0
    };
    static const char* includePaths[] = {
"/home/sanket/Products/root/include/",
"/home/sanket/Desktop/THERMUS-master/main/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ClassesDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate(R"ATTRDUMP(Particle object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMParticle.h")))  TTMParticle;
class __attribute__((annotate(R"ATTRDUMP(Decay object for storage in a ROOT container class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMDecay.h")))  TTMDecay;
class __attribute__((annotate(R"ATTRDUMP(A collection of particles)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMParticleSet.h")))  TTMParticleSet;
class __attribute__((annotate(R"ATTRDUMP(A Parameter Object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMParameter.h")))  TTMParameter;
class __attribute__((annotate(R"ATTRDUMP(Base class for parameter set objects.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMParameterSet.h")))  TTMParameterSet;
class __attribute__((annotate(R"ATTRDUMP(Grand-canonical parameter set)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMParameterSetBSQ.h")))  TTMParameterSetBSQ;
class __attribute__((annotate(R"ATTRDUMP(Canonical strangeness parameter set)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMParameterSetBQ.h")))  TTMParameterSetBQ;
class __attribute__((annotate(R"ATTRDUMP(Canonical BSQ parameter set)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMParameterSetCanBSQ.h")))  TTMParameterSetCanBSQ;
class __attribute__((annotate(R"ATTRDUMP(Base Class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalParticle.h")))  TTMThermalParticle;
class __attribute__((annotate(R"ATTRDUMP(The complete grand-canonical approach)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalParticleBSQ.h")))  TTMThermalParticleBSQ;
class __attribute__((annotate(R"ATTRDUMP(The strangeness-canonical approach)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalParticleBQ.h")))  TTMThermalParticleBQ;
class __attribute__((annotate(R"ATTRDUMP(The canonical BSQ approach)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalParticleCanBSQ.h")))  TTMThermalParticleCanBSQ;
class __attribute__((annotate(R"ATTRDUMP(Density Object for storage in ROOT container class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMDensObj.h")))  __attribute__((annotate("$clingAutoload$TThermalModel.h")))  TTMDensObj;
class __attribute__((annotate(R"ATTRDUMP(Base class for thermal model objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalModel.h")))  TTMThermalModel;
class __attribute__((annotate(R"ATTRDUMP(Object for storage of model and experimental yields)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMYield.h")))  TTMYield;
class __attribute__((annotate(R"ATTRDUMP(Grand-canonical thermal model class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalModelBSQ.h")))  TTMThermalModelBSQ;
class __attribute__((annotate(R"ATTRDUMP(Strangeness-canonical thermal model class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalModelBQ.h")))  TTMThermalModelBQ;
class __attribute__((annotate(R"ATTRDUMP(Canonical thermal model class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalModelCanBSQ.h")))  TTMThermalModelCanBSQ;
class __attribute__((annotate(R"ATTRDUMP(Base class for thermal fit objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalFit.h")))  TTMThermalFit;
class __attribute__((annotate(R"ATTRDUMP(Grand-Canonical thermal fit class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalFitBSQ.h")))  TTMThermalFitBSQ;
class __attribute__((annotate(R"ATTRDUMP(Class for fitting in the strangeness-canonical formalism)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalFitBQ.h")))  TTMThermalFitBQ;
class __attribute__((annotate(R"ATTRDUMP(Canonical fit object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TThermalFitCanBSQ.h")))  TTMThermalFitCanBSQ;
class __attribute__((annotate(R"ATTRDUMP(ID Object for storage in ROOT container class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMIDObj.h")))  TTMIDObj;
class __attribute__((annotate(R"ATTRDUMP(Decay channel object for storage in a ROOT container class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTMDecayChannel.h")))  TTMDecayChannel;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ClassesDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TTMParticle.h"
#include "TTMDecay.h"
#include "TTMParticleSet.h"
#include "TTMParameter.h"
#include "TTMParameterSet.h"
#include "TTMParameterSetBSQ.h"
#include "TTMParameterSetBQ.h"
#include "TTMParameterSetCanBSQ.h"
#include "TThermalParticle.h"
#include "TThermalParticleBSQ.h"
#include "TThermalParticleBQ.h"
#include "TThermalParticleCanBSQ.h"
#include "TThermalModel.h"
#include "TTMYield.h"
#include "TTMDensObj.h"
#include "TThermalModelBSQ.h"
#include "TThermalModelBQ.h"
#include "TThermalModelCanBSQ.h"
#include "TThermalFit.h"
#include "TThermalFitBSQ.h"
#include "TThermalFitBQ.h"
#include "TThermalFitCanBSQ.h"
#include "TTMIDObj.h"
#include "TTMDecayChannel.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TTMDecay", payloadCode, "@",
"TTMDecayChannel", payloadCode, "@",
"TTMDensObj", payloadCode, "@",
"TTMIDObj", payloadCode, "@",
"TTMParameter", payloadCode, "@",
"TTMParameterSet", payloadCode, "@",
"TTMParameterSetBQ", payloadCode, "@",
"TTMParameterSetBSQ", payloadCode, "@",
"TTMParameterSetCanBSQ", payloadCode, "@",
"TTMParticle", payloadCode, "@",
"TTMParticleSet", payloadCode, "@",
"TTMThermalFit", payloadCode, "@",
"TTMThermalFitBQ", payloadCode, "@",
"TTMThermalFitBSQ", payloadCode, "@",
"TTMThermalFitCanBSQ", payloadCode, "@",
"TTMThermalModel", payloadCode, "@",
"TTMThermalModelBQ", payloadCode, "@",
"TTMThermalModelBSQ", payloadCode, "@",
"TTMThermalModelCanBSQ", payloadCode, "@",
"TTMThermalParticle", payloadCode, "@",
"TTMThermalParticleBQ", payloadCode, "@",
"TTMThermalParticleBSQ", payloadCode, "@",
"TTMThermalParticleCanBSQ", payloadCode, "@",
"TTMYield", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ClassesDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ClassesDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ClassesDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ClassesDict() {
  TriggerDictionaryInitialization_ClassesDict_Impl();
}
