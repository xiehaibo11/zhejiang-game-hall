.class public Lcom/qihoo360/loader2/IPlugin$Default;
.super Ljava/lang/Object;
.source "IPlugin.java"

# interfaces
.implements Lcom/qihoo360/loader2/IPlugin;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/IPlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Default"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public query(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method
