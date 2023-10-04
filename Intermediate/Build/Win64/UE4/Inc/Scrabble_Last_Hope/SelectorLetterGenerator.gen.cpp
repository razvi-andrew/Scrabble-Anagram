// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scrabble_Last_Hope/SelectorLetterGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectorLetterGenerator() {}
// Cross Module References
	SCRABBLE_LAST_HOPE_API UClass* Z_Construct_UClass_USelectorLetterGenerator_NoRegister();
	SCRABBLE_LAST_HOPE_API UClass* Z_Construct_UClass_USelectorLetterGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Scrabble_Last_Hope();
// End Cross Module References
	DEFINE_FUNCTION(USelectorLetterGenerator::execquestSeedGenerator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_variable);
		P_GET_PROPERTY(FIntProperty,Z_Param_NoOfQuestions);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed0);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed1);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed2);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed3);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed4);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed5);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed6);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed7);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed8);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_seed9);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::questSeedGenerator(Z_Param_variable,Z_Param_NoOfQuestions,Z_Param_Out_seed0,Z_Param_Out_seed1,Z_Param_Out_seed2,Z_Param_Out_seed3,Z_Param_Out_seed4,Z_Param_Out_seed5,Z_Param_Out_seed6,Z_Param_Out_seed7,Z_Param_Out_seed8,Z_Param_Out_seed9);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execafisareincrem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_nr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::afisareincrem(Z_Param_nr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execgenQuest)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed0);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed1);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed2);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed3);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed4);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed5);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed6);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed7);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed8);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed9);
		P_GET_PROPERTY(FIntProperty,Z_Param_randSeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_seedQuest);
		P_GET_PROPERTY(FIntProperty,Z_Param_intrebare);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Quest);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Curs);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c0);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c1);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c2);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c3);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c4);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c5);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c6);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c7);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c8);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c9);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c10);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c11);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c12);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c13);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_c14);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i0);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i1);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i2);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i3);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i4);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i5);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i6);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i7);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i8);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i9);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i10);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i11);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i12);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i13);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_i14);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::genQuest(Z_Param_seed0,Z_Param_seed1,Z_Param_seed2,Z_Param_seed3,Z_Param_seed4,Z_Param_seed5,Z_Param_seed6,Z_Param_seed7,Z_Param_seed8,Z_Param_seed9,Z_Param_randSeed,Z_Param_seedQuest,Z_Param_intrebare,Z_Param_Out_Quest,Z_Param_Out_Curs,Z_Param_Out_c0,Z_Param_Out_c1,Z_Param_Out_c2,Z_Param_Out_c3,Z_Param_Out_c4,Z_Param_Out_c5,Z_Param_Out_c6,Z_Param_Out_c7,Z_Param_Out_c8,Z_Param_Out_c9,Z_Param_Out_c10,Z_Param_Out_c11,Z_Param_Out_c12,Z_Param_Out_c13,Z_Param_Out_c14,Z_Param_Out_i0,Z_Param_Out_i1,Z_Param_Out_i2,Z_Param_Out_i3,Z_Param_Out_i4,Z_Param_Out_i5,Z_Param_Out_i6,Z_Param_Out_i7,Z_Param_Out_i8,Z_Param_Out_i9,Z_Param_Out_i10,Z_Param_Out_i11,Z_Param_Out_i12,Z_Param_Out_i13,Z_Param_Out_i14);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execverifyIntrebareNr)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_nr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::verifyIntrebareNr(Z_Param_nr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execaddinBag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_input);
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_GET_PROPERTY(FIntProperty,Z_Param_c);
		P_GET_PROPERTY(FIntProperty,Z_Param_d);
		P_GET_PROPERTY(FIntProperty,Z_Param_e);
		P_GET_PROPERTY(FIntProperty,Z_Param_f);
		P_GET_PROPERTY(FIntProperty,Z_Param_g);
		P_GET_PROPERTY(FIntProperty,Z_Param_h);
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_GET_PROPERTY(FIntProperty,Z_Param_j);
		P_GET_PROPERTY(FIntProperty,Z_Param_k);
		P_GET_PROPERTY(FIntProperty,Z_Param_l);
		P_GET_PROPERTY(FIntProperty,Z_Param_m);
		P_GET_PROPERTY(FIntProperty,Z_Param_n);
		P_GET_PROPERTY(FIntProperty,Z_Param_o);
		P_GET_PROPERTY(FIntProperty,Z_Param_p);
		P_GET_PROPERTY(FIntProperty,Z_Param_q);
		P_GET_PROPERTY(FIntProperty,Z_Param_r);
		P_GET_PROPERTY(FIntProperty,Z_Param_s);
		P_GET_PROPERTY(FIntProperty,Z_Param_t);
		P_GET_PROPERTY(FIntProperty,Z_Param_u);
		P_GET_PROPERTY(FIntProperty,Z_Param_v);
		P_GET_PROPERTY(FIntProperty,Z_Param_w);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_aR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_cR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_dR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_eR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_fR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_gR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_hR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_iR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_jR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_kR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_mR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_nR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_oR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_pR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_qR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_rR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_tR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_uR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_vR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_wR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_xR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_yR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_zR);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::addinBag(Z_Param_input,Z_Param_a,Z_Param_b,Z_Param_c,Z_Param_d,Z_Param_e,Z_Param_f,Z_Param_g,Z_Param_h,Z_Param_i,Z_Param_j,Z_Param_k,Z_Param_l,Z_Param_m,Z_Param_n,Z_Param_o,Z_Param_p,Z_Param_q,Z_Param_r,Z_Param_s,Z_Param_t,Z_Param_u,Z_Param_v,Z_Param_w,Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_Out_aR,Z_Param_Out_bR,Z_Param_Out_cR,Z_Param_Out_dR,Z_Param_Out_eR,Z_Param_Out_fR,Z_Param_Out_gR,Z_Param_Out_hR,Z_Param_Out_iR,Z_Param_Out_jR,Z_Param_Out_kR,Z_Param_Out_lR,Z_Param_Out_mR,Z_Param_Out_nR,Z_Param_Out_oR,Z_Param_Out_pR,Z_Param_Out_qR,Z_Param_Out_rR,Z_Param_Out_sR,Z_Param_Out_tR,Z_Param_Out_uR,Z_Param_Out_vR,Z_Param_Out_wR,Z_Param_Out_xR,Z_Param_Out_yR,Z_Param_Out_zR);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execaddPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_input1);
		P_GET_PROPERTY(FIntProperty,Z_Param_input2);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::addPoints(Z_Param_input1,Z_Param_input2,Z_Param_Out_output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execverifyWord)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed0);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed1);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed2);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed3);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed4);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed5);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed6);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed7);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed8);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed9);
		P_GET_PROPERTY(FIntProperty,Z_Param_intrebare);
		P_GET_PROPERTY(FStrProperty,Z_Param_c0);
		P_GET_PROPERTY(FStrProperty,Z_Param_c1);
		P_GET_PROPERTY(FStrProperty,Z_Param_c2);
		P_GET_PROPERTY(FStrProperty,Z_Param_c3);
		P_GET_PROPERTY(FStrProperty,Z_Param_c4);
		P_GET_PROPERTY(FStrProperty,Z_Param_c5);
		P_GET_PROPERTY(FStrProperty,Z_Param_c6);
		P_GET_PROPERTY(FStrProperty,Z_Param_c7);
		P_GET_PROPERTY(FStrProperty,Z_Param_c8);
		P_GET_PROPERTY(FStrProperty,Z_Param_c9);
		P_GET_PROPERTY(FStrProperty,Z_Param_c10);
		P_GET_PROPERTY(FStrProperty,Z_Param_c11);
		P_GET_PROPERTY(FStrProperty,Z_Param_c12);
		P_GET_PROPERTY(FStrProperty,Z_Param_c13);
		P_GET_PROPERTY(FStrProperty,Z_Param_c14);
		P_GET_UBOOL_REF(Z_Param_Out_isvalid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_points);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_testStr1);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_testStr2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::verifyWord(Z_Param_seed0,Z_Param_seed1,Z_Param_seed2,Z_Param_seed3,Z_Param_seed4,Z_Param_seed5,Z_Param_seed6,Z_Param_seed7,Z_Param_seed8,Z_Param_seed9,Z_Param_intrebare,Z_Param_c0,Z_Param_c1,Z_Param_c2,Z_Param_c3,Z_Param_c4,Z_Param_c5,Z_Param_c6,Z_Param_c7,Z_Param_c8,Z_Param_c9,Z_Param_c10,Z_Param_c11,Z_Param_c12,Z_Param_c13,Z_Param_c14,Z_Param_Out_isvalid,Z_Param_Out_points,Z_Param_Out_testStr1,Z_Param_Out_testStr2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execverifyBag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_many);
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_GET_PROPERTY(FIntProperty,Z_Param_c);
		P_GET_PROPERTY(FIntProperty,Z_Param_d);
		P_GET_PROPERTY(FIntProperty,Z_Param_e);
		P_GET_PROPERTY(FIntProperty,Z_Param_f);
		P_GET_PROPERTY(FIntProperty,Z_Param_g);
		P_GET_PROPERTY(FIntProperty,Z_Param_h);
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_GET_PROPERTY(FIntProperty,Z_Param_j);
		P_GET_PROPERTY(FIntProperty,Z_Param_k);
		P_GET_PROPERTY(FIntProperty,Z_Param_l);
		P_GET_PROPERTY(FIntProperty,Z_Param_m);
		P_GET_PROPERTY(FIntProperty,Z_Param_n);
		P_GET_PROPERTY(FIntProperty,Z_Param_o);
		P_GET_PROPERTY(FIntProperty,Z_Param_p);
		P_GET_PROPERTY(FIntProperty,Z_Param_q);
		P_GET_PROPERTY(FIntProperty,Z_Param_r);
		P_GET_PROPERTY(FIntProperty,Z_Param_s);
		P_GET_PROPERTY(FIntProperty,Z_Param_t);
		P_GET_PROPERTY(FIntProperty,Z_Param_u);
		P_GET_PROPERTY(FIntProperty,Z_Param_v);
		P_GET_PROPERTY(FIntProperty,Z_Param_w);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::verifyBag(Z_Param_many,Z_Param_a,Z_Param_b,Z_Param_c,Z_Param_d,Z_Param_e,Z_Param_f,Z_Param_g,Z_Param_h,Z_Param_i,Z_Param_j,Z_Param_k,Z_Param_l,Z_Param_m,Z_Param_n,Z_Param_o,Z_Param_p,Z_Param_q,Z_Param_r,Z_Param_s,Z_Param_t,Z_Param_u,Z_Param_v,Z_Param_w,Z_Param_x,Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execrandCalc)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USelectorLetterGenerator::randCalc(Z_Param_variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectorLetterGenerator::execRanLetGen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_var);
		P_GET_PROPERTY(FIntProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_b);
		P_GET_PROPERTY(FIntProperty,Z_Param_c);
		P_GET_PROPERTY(FIntProperty,Z_Param_d);
		P_GET_PROPERTY(FIntProperty,Z_Param_e);
		P_GET_PROPERTY(FIntProperty,Z_Param_f);
		P_GET_PROPERTY(FIntProperty,Z_Param_g);
		P_GET_PROPERTY(FIntProperty,Z_Param_h);
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_GET_PROPERTY(FIntProperty,Z_Param_j);
		P_GET_PROPERTY(FIntProperty,Z_Param_k);
		P_GET_PROPERTY(FIntProperty,Z_Param_l);
		P_GET_PROPERTY(FIntProperty,Z_Param_m);
		P_GET_PROPERTY(FIntProperty,Z_Param_n);
		P_GET_PROPERTY(FIntProperty,Z_Param_o);
		P_GET_PROPERTY(FIntProperty,Z_Param_p);
		P_GET_PROPERTY(FIntProperty,Z_Param_q);
		P_GET_PROPERTY(FIntProperty,Z_Param_r);
		P_GET_PROPERTY(FIntProperty,Z_Param_s);
		P_GET_PROPERTY(FIntProperty,Z_Param_t);
		P_GET_PROPERTY(FIntProperty,Z_Param_u);
		P_GET_PROPERTY(FIntProperty,Z_Param_v);
		P_GET_PROPERTY(FIntProperty,Z_Param_w);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_z);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_aR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_cR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_dR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_eR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_fR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_gR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_hR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_iR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_jR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_kR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_mR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_nR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_oR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_pR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_qR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_rR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_tR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_uR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_vR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_wR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_xR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_yR);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_zR);
		P_GET_UBOOL_REF(Z_Param_Out_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USelectorLetterGenerator::RanLetGen(Z_Param_var,Z_Param_a,Z_Param_b,Z_Param_c,Z_Param_d,Z_Param_e,Z_Param_f,Z_Param_g,Z_Param_h,Z_Param_i,Z_Param_j,Z_Param_k,Z_Param_l,Z_Param_m,Z_Param_n,Z_Param_o,Z_Param_p,Z_Param_q,Z_Param_r,Z_Param_s,Z_Param_t,Z_Param_u,Z_Param_v,Z_Param_w,Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_Out_aR,Z_Param_Out_bR,Z_Param_Out_cR,Z_Param_Out_dR,Z_Param_Out_eR,Z_Param_Out_fR,Z_Param_Out_gR,Z_Param_Out_hR,Z_Param_Out_iR,Z_Param_Out_jR,Z_Param_Out_kR,Z_Param_Out_lR,Z_Param_Out_mR,Z_Param_Out_nR,Z_Param_Out_oR,Z_Param_Out_pR,Z_Param_Out_qR,Z_Param_Out_rR,Z_Param_Out_sR,Z_Param_Out_tR,Z_Param_Out_uR,Z_Param_Out_vR,Z_Param_Out_wR,Z_Param_Out_xR,Z_Param_Out_yR,Z_Param_Out_zR,Z_Param_Out_state);
		P_NATIVE_END;
	}
	void USelectorLetterGenerator::StaticRegisterNativesUSelectorLetterGenerator()
	{
		UClass* Class = USelectorLetterGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addinBag", &USelectorLetterGenerator::execaddinBag },
			{ "addPoints", &USelectorLetterGenerator::execaddPoints },
			{ "afisareincrem", &USelectorLetterGenerator::execafisareincrem },
			{ "genQuest", &USelectorLetterGenerator::execgenQuest },
			{ "questSeedGenerator", &USelectorLetterGenerator::execquestSeedGenerator },
			{ "randCalc", &USelectorLetterGenerator::execrandCalc },
			{ "RanLetGen", &USelectorLetterGenerator::execRanLetGen },
			{ "verifyBag", &USelectorLetterGenerator::execverifyBag },
			{ "verifyIntrebareNr", &USelectorLetterGenerator::execverifyIntrebareNr },
			{ "verifyWord", &USelectorLetterGenerator::execverifyWord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics
	{
		struct SelectorLetterGenerator_eventaddinBag_Parms
		{
			FString input;
			int32 a;
			int32 b;
			int32 c;
			int32 d;
			int32 e;
			int32 f;
			int32 g;
			int32 h;
			int32 i;
			int32 j;
			int32 k;
			int32 l;
			int32 m;
			int32 n;
			int32 o;
			int32 p;
			int32 q;
			int32 r;
			int32 s;
			int32 t;
			int32 u;
			int32 v;
			int32 w;
			int32 x;
			int32 y;
			int32 z;
			int32 aR;
			int32 bR;
			int32 cR;
			int32 dR;
			int32 eR;
			int32 fR;
			int32 gR;
			int32 hR;
			int32 iR;
			int32 jR;
			int32 kR;
			int32 lR;
			int32 mR;
			int32 nR;
			int32 oR;
			int32 pR;
			int32 qR;
			int32 rR;
			int32 sR;
			int32 tR;
			int32 uR;
			int32 vR;
			int32 wR;
			int32 xR;
			int32 yR;
			int32 zR;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_c;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_d;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_e;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_f;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_g;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_h;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_j;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_k;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_l;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_n;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_o;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_p;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_q;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_r;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_s;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_t;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_u;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_v;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_aR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_eR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_fR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_gR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_hR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_jR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_kR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_oR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_qR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_uR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_vR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_wR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_xR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_yR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_zR;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_c = { "c", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, c), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_d = { "d", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, d), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_e = { "e", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, e), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_f = { "f", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, f), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_g = { "g", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, g), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, h), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_j = { "j", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, j), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, k), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_l = { "l", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, l), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_m = { "m", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, m), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, n), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_o = { "o", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, o), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, p), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_q = { "q", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, q), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_r = { "r", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, r), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_u = { "u", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, u), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, v), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_aR = { "aR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, aR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_bR = { "bR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, bR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_cR = { "cR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, cR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_dR = { "dR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, dR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_eR = { "eR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, eR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_fR = { "fR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, fR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_gR = { "gR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, gR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_hR = { "hR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, hR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_iR = { "iR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, iR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_jR = { "jR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, jR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_kR = { "kR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, kR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_lR = { "lR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, lR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_mR = { "mR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, mR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_nR = { "nR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, nR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_oR = { "oR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, oR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_pR = { "pR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, pR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_qR = { "qR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, qR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_rR = { "rR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, rR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_sR = { "sR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, sR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_tR = { "tR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, tR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_uR = { "uR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, uR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_vR = { "vR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, vR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_wR = { "wR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, wR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_xR = { "xR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, xR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_yR = { "yR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, yR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_zR = { "zR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, zR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddinBag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_c,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_e,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_f,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_g,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_h,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_j,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_k,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_m,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_n,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_o,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_p,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_q,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_t,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_u,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_v,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_aR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_bR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_cR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_dR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_eR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_fR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_gR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_hR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_iR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_jR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_kR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_lR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_mR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_nR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_oR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_pR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_qR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_rR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_sR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_tR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_uR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_vR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_wR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_xR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_yR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_zR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "addinBag", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventaddinBag_Parms), Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_addinBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_addinBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics
	{
		struct SelectorLetterGenerator_eventaddPoints_Parms
		{
			int32 input1;
			int32 input2;
			int32 output;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_input1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_input2;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_input1 = { "input1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddPoints_Parms, input1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_input2 = { "input2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddPoints_Parms, input2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddPoints_Parms, output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventaddPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_input1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_input2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "addPoints", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventaddPoints_Parms), Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_addPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_addPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics
	{
		struct SelectorLetterGenerator_eventafisareincrem_Parms
		{
			int32 nr;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nr;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::NewProp_nr = { "nr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventafisareincrem_Parms, nr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventafisareincrem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::NewProp_nr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "afisareincrem", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventafisareincrem_Parms), Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics
	{
		struct SelectorLetterGenerator_eventgenQuest_Parms
		{
			int32 seed0;
			int32 seed1;
			int32 seed2;
			int32 seed3;
			int32 seed4;
			int32 seed5;
			int32 seed6;
			int32 seed7;
			int32 seed8;
			int32 seed9;
			int32 randSeed;
			int32 seedQuest;
			int32 intrebare;
			FString Quest;
			FString Curs;
			FString c0;
			FString c1;
			FString c2;
			FString c3;
			FString c4;
			FString c5;
			FString c6;
			FString c7;
			FString c8;
			FString c9;
			FString c10;
			FString c11;
			FString c12;
			FString c13;
			FString c14;
			int32 i0;
			int32 i1;
			int32 i2;
			int32 i3;
			int32 i4;
			int32 i5;
			int32 i6;
			int32 i7;
			int32 i8;
			int32 i9;
			int32 i10;
			int32 i11;
			int32 i12;
			int32 i13;
			int32 i14;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed2;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed3;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed4;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed5;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed6;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed7;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed9;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_randSeed;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seedQuest;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_intrebare;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Curs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c0;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c2;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c3;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c4;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c5;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c6;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c7;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c8;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c9;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c10;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c11;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c12;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c13;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c14;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i2;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i3;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i4;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i5;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i6;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i7;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i9;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i10;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i11;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i12;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i13;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i14;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed0 = { "seed0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed1 = { "seed1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed2 = { "seed2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed3 = { "seed3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed4 = { "seed4", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed4), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed5 = { "seed5", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed6 = { "seed6", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed6), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed7 = { "seed7", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed7), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed8 = { "seed8", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed9 = { "seed9", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seed9), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_randSeed = { "randSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, randSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seedQuest = { "seedQuest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, seedQuest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_intrebare = { "intrebare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, intrebare), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, Quest), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_Curs = { "Curs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, Curs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c0 = { "c0", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c1 = { "c1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c2 = { "c2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c3 = { "c3", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c4 = { "c4", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c4), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c5 = { "c5", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c6 = { "c6", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c6), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c7 = { "c7", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c7), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c8 = { "c8", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c9 = { "c9", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c9), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c10 = { "c10", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c10), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c11 = { "c11", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c11), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c12 = { "c12", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c12), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c13 = { "c13", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c13), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c14 = { "c14", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, c14), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i0 = { "i0", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i1 = { "i1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i2 = { "i2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i3 = { "i3", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i4 = { "i4", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i4), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i5 = { "i5", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i6 = { "i6", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i6), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i7 = { "i7", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i7), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i8 = { "i8", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i9 = { "i9", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i9), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i10 = { "i10", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i10), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i11 = { "i11", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i11), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i12 = { "i12", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i12), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i13 = { "i13", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i13), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i14 = { "i14", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, i14), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventgenQuest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seed9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_randSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_seedQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_intrebare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_Curs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_c14,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_i14,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "genQuest", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventgenQuest_Parms), Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_genQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_genQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics
	{
		struct SelectorLetterGenerator_eventquestSeedGenerator_Parms
		{
			int32 variable;
			int32 NoOfQuestions;
			int32 seed0;
			int32 seed1;
			int32 seed2;
			int32 seed3;
			int32 seed4;
			int32 seed5;
			int32 seed6;
			int32 seed7;
			int32 seed8;
			int32 seed9;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_variable;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NoOfQuestions;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed2;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed3;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed4;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed5;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed6;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed7;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed9;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_variable = { "variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, variable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_NoOfQuestions = { "NoOfQuestions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, NoOfQuestions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed0 = { "seed0", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed1 = { "seed1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed2 = { "seed2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed3 = { "seed3", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed4 = { "seed4", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed4), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed5 = { "seed5", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed6 = { "seed6", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed6), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed7 = { "seed7", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed7), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed8 = { "seed8", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed9 = { "seed9", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, seed9), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventquestSeedGenerator_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_NoOfQuestions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_seed9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "questSeedGenerator", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventquestSeedGenerator_Parms), Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics
	{
		struct SelectorLetterGenerator_eventrandCalc_Parms
		{
			int32 variable;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_variable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::NewProp_variable = { "variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventrandCalc_Parms, variable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventrandCalc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::NewProp_variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "randCalc", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventrandCalc_Parms), Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_randCalc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_randCalc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics
	{
		struct SelectorLetterGenerator_eventRanLetGen_Parms
		{
			int32 var;
			int32 a;
			int32 b;
			int32 c;
			int32 d;
			int32 e;
			int32 f;
			int32 g;
			int32 h;
			int32 i;
			int32 j;
			int32 k;
			int32 l;
			int32 m;
			int32 n;
			int32 o;
			int32 p;
			int32 q;
			int32 r;
			int32 s;
			int32 t;
			int32 u;
			int32 v;
			int32 w;
			int32 x;
			int32 y;
			int32 z;
			int32 aR;
			int32 bR;
			int32 cR;
			int32 dR;
			int32 eR;
			int32 fR;
			int32 gR;
			int32 hR;
			int32 iR;
			int32 jR;
			int32 kR;
			int32 lR;
			int32 mR;
			int32 nR;
			int32 oR;
			int32 pR;
			int32 qR;
			int32 rR;
			int32 sR;
			int32 tR;
			int32 uR;
			int32 vR;
			int32 wR;
			int32 xR;
			int32 yR;
			int32 zR;
			bool state;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_var;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_c;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_d;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_e;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_f;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_g;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_h;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_j;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_k;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_l;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_n;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_o;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_p;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_q;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_r;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_s;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_t;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_u;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_v;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_aR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_eR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_fR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_gR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_hR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_jR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_kR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_oR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_qR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_uR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_vR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_wR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_xR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_yR;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_zR;
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, var), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_c = { "c", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, c), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_d = { "d", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, d), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_e = { "e", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, e), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_f = { "f", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, f), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_g = { "g", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, g), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, h), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_j = { "j", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, j), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, k), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_l = { "l", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, l), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_m = { "m", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, m), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, n), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_o = { "o", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, o), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, p), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_q = { "q", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, q), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_r = { "r", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, r), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_u = { "u", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, u), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, v), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_aR = { "aR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, aR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_bR = { "bR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, bR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_cR = { "cR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, cR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_dR = { "dR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, dR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_eR = { "eR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, eR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_fR = { "fR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, fR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_gR = { "gR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, gR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_hR = { "hR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, hR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_iR = { "iR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, iR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_jR = { "jR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, jR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_kR = { "kR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, kR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_lR = { "lR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, lR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_mR = { "mR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, mR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_nR = { "nR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, nR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_oR = { "oR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, oR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_pR = { "pR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, pR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_qR = { "qR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, qR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_rR = { "rR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, rR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_sR = { "sR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, sR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_tR = { "tR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, tR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_uR = { "uR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, uR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_vR = { "vR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, vR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_wR = { "wR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, wR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_xR = { "xR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, xR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_yR = { "yR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, yR), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_zR = { "zR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, zR), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_state_SetBit(void* Obj)
	{
		((SelectorLetterGenerator_eventRanLetGen_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SelectorLetterGenerator_eventRanLetGen_Parms), &Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventRanLetGen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_var,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_c,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_e,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_f,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_g,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_h,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_j,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_k,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_m,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_n,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_o,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_p,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_q,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_t,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_u,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_v,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_aR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_bR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_cR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_dR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_eR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_fR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_gR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_hR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_iR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_jR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_kR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_lR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_mR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_nR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_oR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_pR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_qR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_rR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_sR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_tR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_uR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_vR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_wR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_xR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_yR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_zR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "RanLetGen", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventRanLetGen_Parms), Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics
	{
		struct SelectorLetterGenerator_eventverifyBag_Parms
		{
			int32 many;
			int32 a;
			int32 b;
			int32 c;
			int32 d;
			int32 e;
			int32 f;
			int32 g;
			int32 h;
			int32 i;
			int32 j;
			int32 k;
			int32 l;
			int32 m;
			int32 n;
			int32 o;
			int32 p;
			int32 q;
			int32 r;
			int32 s;
			int32 t;
			int32 u;
			int32 v;
			int32 w;
			int32 x;
			int32 y;
			int32 z;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_many;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_c;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_d;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_e;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_f;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_g;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_h;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_j;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_k;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_l;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_n;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_o;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_p;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_q;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_r;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_s;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_t;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_u;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_v;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_many = { "many", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, many), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_c = { "c", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, c), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_d = { "d", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, d), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_e = { "e", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, e), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_f = { "f", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, f), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_g = { "g", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, g), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, h), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_j = { "j", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, j), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, k), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_l = { "l", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, l), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_m = { "m", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, m), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, n), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_o = { "o", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, o), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, p), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_q = { "q", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, q), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_r = { "r", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, r), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_u = { "u", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, u), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, v), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyBag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_many,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_c,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_e,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_f,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_g,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_h,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_j,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_k,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_l,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_m,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_n,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_o,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_p,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_q,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_t,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_u,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_v,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "verifyBag", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventverifyBag_Parms), Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_verifyBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_verifyBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics
	{
		struct SelectorLetterGenerator_eventverifyIntrebareNr_Parms
		{
			int32 nr;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nr;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::NewProp_nr = { "nr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyIntrebareNr_Parms, nr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyIntrebareNr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::NewProp_nr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "verifyIntrebareNr", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventverifyIntrebareNr_Parms), Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics
	{
		struct SelectorLetterGenerator_eventverifyWord_Parms
		{
			int32 seed0;
			int32 seed1;
			int32 seed2;
			int32 seed3;
			int32 seed4;
			int32 seed5;
			int32 seed6;
			int32 seed7;
			int32 seed8;
			int32 seed9;
			int32 intrebare;
			FString c0;
			FString c1;
			FString c2;
			FString c3;
			FString c4;
			FString c5;
			FString c6;
			FString c7;
			FString c8;
			FString c9;
			FString c10;
			FString c11;
			FString c12;
			FString c13;
			FString c14;
			bool isvalid;
			int32 points;
			FString testStr1;
			FString testStr2;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed0;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed1;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed2;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed3;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed4;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed5;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed6;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed7;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed9;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_intrebare;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c0;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c2;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c3;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c4;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c5;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c6;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c7;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c8;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c9;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c10;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c11;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c12;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c13;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_c14;
		static void NewProp_isvalid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isvalid;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_testStr1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_testStr2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed0 = { "seed0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed1 = { "seed1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed2 = { "seed2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed3 = { "seed3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed4 = { "seed4", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed4), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed5 = { "seed5", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed6 = { "seed6", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed6), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed7 = { "seed7", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed7), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed8 = { "seed8", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed9 = { "seed9", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, seed9), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_intrebare = { "intrebare", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, intrebare), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c0 = { "c0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c1 = { "c1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c2 = { "c2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c3 = { "c3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c4 = { "c4", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c4), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c5 = { "c5", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c6 = { "c6", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c6), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c7 = { "c7", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c7), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c8 = { "c8", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c9 = { "c9", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c9), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c10 = { "c10", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c10), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c11 = { "c11", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c11), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c12 = { "c12", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c12), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c13 = { "c13", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c13), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c14 = { "c14", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, c14), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_isvalid_SetBit(void* Obj)
	{
		((SelectorLetterGenerator_eventverifyWord_Parms*)Obj)->isvalid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_isvalid = { "isvalid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SelectorLetterGenerator_eventverifyWord_Parms), &Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_isvalid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_testStr1 = { "testStr1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, testStr1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_testStr2 = { "testStr2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, testStr2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectorLetterGenerator_eventverifyWord_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_seed9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_intrebare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_c14,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_isvalid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_testStr1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_testStr2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyCategory2" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectorLetterGenerator, nullptr, "verifyWord", nullptr, nullptr, sizeof(SelectorLetterGenerator_eventverifyWord_Parms), Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectorLetterGenerator_verifyWord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectorLetterGenerator_verifyWord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USelectorLetterGenerator_NoRegister()
	{
		return USelectorLetterGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USelectorLetterGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectorLetterGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Scrabble_Last_Hope,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectorLetterGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectorLetterGenerator_addinBag, "addinBag" }, // 3626320909
		{ &Z_Construct_UFunction_USelectorLetterGenerator_addPoints, "addPoints" }, // 3226222767
		{ &Z_Construct_UFunction_USelectorLetterGenerator_afisareincrem, "afisareincrem" }, // 41112765
		{ &Z_Construct_UFunction_USelectorLetterGenerator_genQuest, "genQuest" }, // 1362318933
		{ &Z_Construct_UFunction_USelectorLetterGenerator_questSeedGenerator, "questSeedGenerator" }, // 1846665960
		{ &Z_Construct_UFunction_USelectorLetterGenerator_randCalc, "randCalc" }, // 3991399456
		{ &Z_Construct_UFunction_USelectorLetterGenerator_RanLetGen, "RanLetGen" }, // 2989514475
		{ &Z_Construct_UFunction_USelectorLetterGenerator_verifyBag, "verifyBag" }, // 3769138666
		{ &Z_Construct_UFunction_USelectorLetterGenerator_verifyIntrebareNr, "verifyIntrebareNr" }, // 460096391
		{ &Z_Construct_UFunction_USelectorLetterGenerator_verifyWord, "verifyWord" }, // 2053551226
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectorLetterGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SelectorLetterGenerator.h" },
		{ "ModuleRelativePath", "SelectorLetterGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectorLetterGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectorLetterGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelectorLetterGenerator_Statics::ClassParams = {
		&USelectorLetterGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USelectorLetterGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectorLetterGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectorLetterGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelectorLetterGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelectorLetterGenerator, 813126878);
	template<> SCRABBLE_LAST_HOPE_API UClass* StaticClass<USelectorLetterGenerator>()
	{
		return USelectorLetterGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelectorLetterGenerator(Z_Construct_UClass_USelectorLetterGenerator, &USelectorLetterGenerator::StaticClass, TEXT("/Script/Scrabble_Last_Hope"), TEXT("USelectorLetterGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectorLetterGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
