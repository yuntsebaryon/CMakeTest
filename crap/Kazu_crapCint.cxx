//
// File generated by rootcint at Thu May 21 18:15:13 2015

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME Kazu_crapCint
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "Kazu_crapCint.h"

#include "TClass.h"
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

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
      #if !(defined(R__ACCESS_IN_SYMBOL) || defined(R__USE_SHADOW_CLASS))
      typedef ::sample sample;
      #else
      class sample  {
         public:
         //friend XX;
         // To force the creation of a virtual table, throw just in case.
         virtual ~sample() throw() {};
      };
      #endif

      #if !(defined(R__ACCESS_IN_SYMBOL) || defined(R__USE_SHADOW_CLASS))
      typedef ::yuntse yuntse;
      #else
      class yuntse  {
         public:
         //friend XX;
      };
      #endif

   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void sample_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void sample_Dictionary();
   static void *new_sample(void *p = 0);
   static void *newArray_sample(Long_t size, void *p);
   static void delete_sample(void *p);
   static void deleteArray_sample(void *p);
   static void destruct_sample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sample*)
   {
      // Make sure the shadow class has the right sizeof
      R__ASSERT(sizeof(::sample) == sizeof(::ROOT::Shadow::sample));
      ::sample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sample),0);
      static ::ROOT::TGenericClassInfo 
         instance("sample", "/Users/yuntse/Work/uboone/LArLite/UserDev/Kazu/crap/sample.h", 22,
                  typeid(::sample), DefineBehavior(ptr, ptr),
                  &sample_ShowMembers, &sample_Dictionary, isa_proxy, 4,
                  sizeof(::sample) );
      instance.SetNew(&new_sample);
      instance.SetNewArray(&newArray_sample);
      instance.SetDelete(&delete_sample);
      instance.SetDeleteArray(&deleteArray_sample);
      instance.SetDestructor(&destruct_sample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sample*)
   {
      return GenerateInitInstanceLocal((::sample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::sample*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void sample_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const ::sample*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   void yuntse_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void yuntse_Dictionary();
   static void *new_yuntse(void *p = 0);
   static void *newArray_yuntse(Long_t size, void *p);
   static void delete_yuntse(void *p);
   static void deleteArray_yuntse(void *p);
   static void destruct_yuntse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::yuntse*)
   {
      // Make sure the shadow class has the right sizeof
      R__ASSERT(sizeof(::yuntse) == sizeof(::ROOT::Shadow::yuntse));
      ::yuntse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::yuntse),0);
      static ::ROOT::TGenericClassInfo 
         instance("yuntse", "/Users/yuntse/Work/uboone/LArLite/UserDev/Kazu/crap/yuntse.h", 24,
                  typeid(::yuntse), DefineBehavior(ptr, ptr),
                  &yuntse_ShowMembers, &yuntse_Dictionary, isa_proxy, 4,
                  sizeof(::yuntse) );
      instance.SetNew(&new_yuntse);
      instance.SetNewArray(&newArray_yuntse);
      instance.SetDelete(&delete_yuntse);
      instance.SetDeleteArray(&deleteArray_yuntse);
      instance.SetDestructor(&destruct_yuntse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::yuntse*)
   {
      return GenerateInitInstanceLocal((::yuntse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::yuntse*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void yuntse_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const ::yuntse*)0x0)->GetClass();
   }

} // end of namespace ROOT

//______________________________________________________________________________
namespace ROOT {
   void sample_ShowMembers(void *obj, TMemberInspector &R__insp)
   {
      // Inspect the data members of an object of class sample.
      typedef ::ROOT::Shadow::sample ShadowClass;
      ShadowClass *sobj = (ShadowClass*)obj;
      if (sobj) { } // Dummy usage just in case there is no datamember.

      TClass *R__cl  = ::ROOT::GenerateInitInstanceLocal((const ::sample*)0x0)->GetClass();
      if (R__cl || R__insp.IsA()) { }
   }

}

namespace ROOT {
   // Wrappers around operator new
   static void *new_sample(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::sample : new ::sample;
   }
   static void *newArray_sample(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::sample[nElements] : new ::sample[nElements];
   }
   // Wrapper around operator delete
   static void delete_sample(void *p) {
      delete ((::sample*)p);
   }
   static void deleteArray_sample(void *p) {
      delete [] ((::sample*)p);
   }
   static void destruct_sample(void *p) {
      typedef ::sample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::sample

//______________________________________________________________________________
namespace ROOT {
   void yuntse_ShowMembers(void *obj, TMemberInspector &R__insp)
   {
      // Inspect the data members of an object of class yuntse.
      typedef ::ROOT::Shadow::yuntse ShadowClass;
      ShadowClass *sobj = (ShadowClass*)obj;
      if (sobj) { } // Dummy usage just in case there is no datamember.

      TClass *R__cl  = ::ROOT::GenerateInitInstanceLocal((const ::yuntse*)0x0)->GetClass();
      if (R__cl || R__insp.IsA()) { }
   }

}

namespace ROOT {
   // Wrappers around operator new
   static void *new_yuntse(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::yuntse : new ::yuntse;
   }
   static void *newArray_yuntse(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::yuntse[nElements] : new ::yuntse[nElements];
   }
   // Wrapper around operator delete
   static void delete_yuntse(void *p) {
      delete ((::yuntse*)p);
   }
   static void deleteArray_yuntse(void *p) {
      delete [] ((::yuntse*)p);
   }
   static void destruct_yuntse(void *p) {
      typedef ::yuntse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::yuntse

/********************************************************
* Kazu_crapCint.cxx
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableKazu_crapCint();

extern "C" void G__set_cpp_environmentKazu_crapCint() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("/Users/yuntse/Work/uboone/LArLite/UserDev/Kazu/crap/sample.h");
  G__add_compiledheader("/Users/yuntse/Work/uboone/LArLite/UserDev/Kazu/crap/yuntse.h");
  G__cpp_reset_tagtableKazu_crapCint();
}
#include <new>
extern "C" int G__cpp_dllrevKazu_crapCint() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* sample */
static int G__Kazu_crapCint_168_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   sample* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new sample[n];
     } else {
       p = new((void*) gvp) sample[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new sample;
     } else {
       p = new((void*) gvp) sample;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Kazu_crapCintLN_sample));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__Kazu_crapCint_168_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   sample* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new sample(*(sample*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Kazu_crapCintLN_sample));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef sample G__Tsample;
static int G__Kazu_crapCint_168_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 0
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (sample*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((sample*) (soff+(sizeof(sample)*i)))->~G__Tsample();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (sample*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((sample*) (soff))->~G__Tsample();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__Kazu_crapCint_168_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   sample* dest = (sample*) G__getstructoffset();
   *dest = *(sample*) libp->para[0].ref;
   const sample& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* yuntse */
static int G__Kazu_crapCint_169_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   yuntse* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new yuntse[n];
     } else {
       p = new((void*) gvp) yuntse[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new yuntse;
     } else {
       p = new((void*) gvp) yuntse;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Kazu_crapCintLN_yuntse));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__Kazu_crapCint_169_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   yuntse* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new yuntse(*(yuntse*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Kazu_crapCintLN_yuntse));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef yuntse G__Tyuntse;
static int G__Kazu_crapCint_169_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 0
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (yuntse*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((yuntse*) (soff+(sizeof(yuntse)*i)))->~G__Tyuntse();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (yuntse*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((yuntse*) (soff))->~G__Tyuntse();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__Kazu_crapCint_169_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   yuntse* dest = (yuntse*) G__getstructoffset();
   const yuntse& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* sample */

/* yuntse */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncKazu_crapCint {
 public:
  G__Sizep2memfuncKazu_crapCint(): p(&G__Sizep2memfuncKazu_crapCint::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncKazu_crapCint::*p)();
};

size_t G__get_sizep2memfuncKazu_crapCint()
{
  G__Sizep2memfuncKazu_crapCint a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceKazu_crapCint() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableKazu_crapCint() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__Kazu_crapCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__Kazu_crapCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Kazu_crapCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__Kazu_crapCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Kazu_crapCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__Kazu_crapCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__Kazu_crapCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Kazu_crapCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__Kazu_crapCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Kazu_crapCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* sample */
static void G__setup_memvarsample(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__Kazu_crapCintLN_sample));
   { sample *p; p=(sample*)0x1000; if (p) { }
   G__memvar_setup((void*)0,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* yuntse */
static void G__setup_memvaryuntse(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__Kazu_crapCintLN_yuntse));
   { yuntse *p; p=(yuntse*)0x1000; if (p) { }
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarKazu_crapCint() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncsample(void) {
   /* sample */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__Kazu_crapCintLN_sample));
   G__memfunc_setup("sample",642,G__Kazu_crapCint_168_0_1, 105, G__get_linked_tagnum(&G__Kazu_crapCintLN_sample), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   // automatic copy constructor
   G__memfunc_setup("sample", 642, G__Kazu_crapCint_168_0_2, (int) ('i'), G__get_linked_tagnum(&G__Kazu_crapCintLN_sample), -1, 0, 1, 1, 1, 0, "u 'sample' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~sample", 768, G__Kazu_crapCint_168_0_3, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__Kazu_crapCint_168_0_4, (int) ('u'), G__get_linked_tagnum(&G__Kazu_crapCintLN_sample), -1, 1, 1, 1, 1, 0, "u 'sample' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncyuntse(void) {
   /* yuntse */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__Kazu_crapCintLN_yuntse));
   G__memfunc_setup("yuntse",680,G__Kazu_crapCint_169_0_1, 105, G__get_linked_tagnum(&G__Kazu_crapCintLN_yuntse), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   // automatic copy constructor
   G__memfunc_setup("yuntse", 680, G__Kazu_crapCint_169_0_2, (int) ('i'), G__get_linked_tagnum(&G__Kazu_crapCintLN_yuntse), -1, 0, 1, 1, 1, 0, "u 'yuntse' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~yuntse", 806, G__Kazu_crapCint_169_0_3, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__Kazu_crapCint_169_0_4, (int) ('u'), G__get_linked_tagnum(&G__Kazu_crapCintLN_yuntse), -1, 1, 1, 1, 1, 0, "u 'yuntse' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncKazu_crapCint() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalKazu_crapCint() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcKazu_crapCint() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__Kazu_crapCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__Kazu_crapCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__Kazu_crapCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__Kazu_crapCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__Kazu_crapCintLN_sample = { "sample" , 99 , -1 };
G__linked_taginfo G__Kazu_crapCintLN_yuntse = { "yuntse" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableKazu_crapCint() {
  G__Kazu_crapCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__Kazu_crapCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__Kazu_crapCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__Kazu_crapCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__Kazu_crapCintLN_sample.tagnum = -1 ;
  G__Kazu_crapCintLN_yuntse.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableKazu_crapCint() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__Kazu_crapCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__Kazu_crapCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__Kazu_crapCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__Kazu_crapCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__Kazu_crapCintLN_sample),sizeof(sample),-1,263424,(char*)NULL,G__setup_memvarsample,G__setup_memfuncsample);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__Kazu_crapCintLN_yuntse),sizeof(yuntse),-1,263424,(char*)NULL,G__setup_memvaryuntse,G__setup_memfuncyuntse);
}
extern "C" void G__cpp_setupKazu_crapCint(void) {
  G__check_setup_version(30051515,"G__cpp_setupKazu_crapCint()");
  G__set_cpp_environmentKazu_crapCint();
  G__cpp_setup_tagtableKazu_crapCint();

  G__cpp_setup_inheritanceKazu_crapCint();

  G__cpp_setup_typetableKazu_crapCint();

  G__cpp_setup_memvarKazu_crapCint();

  G__cpp_setup_memfuncKazu_crapCint();
  G__cpp_setup_globalKazu_crapCint();
  G__cpp_setup_funcKazu_crapCint();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncKazu_crapCint();
  return;
}
class G__cpp_setup_initKazu_crapCint {
  public:
    G__cpp_setup_initKazu_crapCint() { G__add_setup_func("Kazu_crapCint",(G__incsetup)(&G__cpp_setupKazu_crapCint)); G__call_setup_funcs(); }
   ~G__cpp_setup_initKazu_crapCint() { G__remove_setup_func("Kazu_crapCint"); }
};
G__cpp_setup_initKazu_crapCint G__cpp_setup_initializerKazu_crapCint;
