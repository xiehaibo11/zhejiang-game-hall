.class public interface abstract Lcom/qihoo360/loader2/IPlugin;
.super Ljava/lang/Object;
.source "IPlugin.java"

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/IPlugin$Stub;,
        Lcom/qihoo360/loader2/IPlugin$Default;
    }
.end annotation


# virtual methods
.method public abstract query(Ljava/lang/String;)Landroid/os/IBinder;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation
.end method
