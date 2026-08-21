.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IChunkCntAidlCalculator$Default;
    }
.end annotation


# virtual methods
.method public abstract calculateChunkCount(J)I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
