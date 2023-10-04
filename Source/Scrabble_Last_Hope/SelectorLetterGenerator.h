// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SelectorLetterGenerator.generated.h"


/**
 * 
 */
UCLASS()
class SCRABBLE_LAST_HOPE_API USelectorLetterGenerator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MyCategory")
		static FString RanLetGen(int var, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w, int x, int y, int z, int& aR, int& bR, int& cR, int& dR, int& eR, int& fR, int& gR, int& hR, int& iR, int& jR, int& kR, int& lR, int& mR, int& nR, int& oR, int& pR, int& qR, int& rR, int& sR, int& tR, int& uR, int& vR, int& wR, int& xR, int& yR, int& zR, bool& state);
		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 randCalc(int variable);
		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 verifyBag(int many, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w, int x, int y, int z);
		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 verifyWord(int seed0, int seed1, int seed2, int seed3, int seed4, int seed5, int seed6, int seed7, int seed8, int seed9, int intrebare, FString c0, FString c1, FString c2, FString c3, FString c4, FString c5, FString c6, FString c7, FString c8, FString c9, FString c10, FString c11, FString c12, FString c13, FString c14, bool& isvalid, int& points, FString& testStr1, FString& testStr2);
		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 addPoints(int input1, int input2, int &output);
		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 addinBag(FString input, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w, int x, int y, int z, int& aR, int& bR, int& cR, int& dR, int& eR, int& fR, int& gR, int& hR, int& iR, int& jR, int& kR, int& lR, int& mR, int& nR, int& oR, int& pR, int& qR, int& rR, int& sR, int& tR, int& uR, int& vR, int& wR, int& xR, int& yR, int& zR);
		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 verifyIntrebareNr(int nr);

		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 genQuest(int seed0, int seed1, int seed2, int seed3, int seed4, int seed5, int seed6, int seed7, int seed8, int seed9, int randSeed, int seedQuest, int intrebare, FString& Quest, FString& Curs, FString& c0, FString& c1, FString& c2, FString& c3, FString& c4, FString& c5, FString& c6, FString& c7, FString& c8, FString& c9, FString& c10, FString& c11, FString& c12, FString& c13, FString& c14, int& i0, int& i1, int& i2, int& i3, int& i4, int& i5, int& i6, int& i7, int& i8, int& i9, int& i10, int& i11, int& i12, int& i13, int& i14);
		
		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 afisareincrem(int nr);

		UFUNCTION(BlueprintCallable, Category = "MyCategory2")
		static int32 questSeedGenerator(int variable, int NoOfQuestions, int& seed0, int& seed1, int& seed2, int& seed3, int& seed4, int& seed5, int& seed6, int& seed7, int& seed8, int& seed9);

};
