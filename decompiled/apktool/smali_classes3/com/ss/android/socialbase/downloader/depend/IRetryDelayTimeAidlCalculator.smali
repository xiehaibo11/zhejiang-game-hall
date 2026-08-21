.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Stub;,
        Lcom/ss/android/socialbase/downloader/depend/IRetryDelayTimeAidlCalculator$Default;
    }
.end annotation


# virtual methods
.method public abstract calculateRetryDelayTime(II)J
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
