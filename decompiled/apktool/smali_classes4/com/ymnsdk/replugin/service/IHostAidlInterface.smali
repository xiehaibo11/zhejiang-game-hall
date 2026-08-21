.class public interface abstract Lcom/ymnsdk/replugin/service/IHostAidlInterface;
.super Ljava/lang/Object;
.source "IHostAidlInterface.java"

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/service/IHostAidlInterface$Stub;,
        Lcom/ymnsdk/replugin/service/IHostAidlInterface$Default;
    }
.end annotation


# virtual methods
.method public abstract postToSepperllita(Ljava/lang/String;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
