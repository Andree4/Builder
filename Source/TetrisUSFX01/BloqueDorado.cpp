// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueDorado.h"
#include "Pieza.h"

// Sets default values
ABloqueDorado::ABloqueDorado()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueDorado::BeginPlay()
{
	Super::BeginPlay();
	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APieza>(APieza::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABloqueDorado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueDorado::ConstruirColores()
{
	Pieza->setColors(3);
}

APieza* ABloqueDorado::GetPieza()
{
	return Pieza;
}

