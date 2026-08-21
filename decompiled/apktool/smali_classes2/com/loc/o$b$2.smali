.class final Lcom/loc/o$b$2;
.super Landroid/net/ConnectivityManager$NetworkCallback;
.source "DeviceInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/loc/o$b;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/o$b;


# direct methods
.method constructor <init>(Lcom/loc/o$b;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/o$b$2;->a:Lcom/loc/o$b;

    invoke-direct {p0}, Landroid/net/ConnectivityManager$NetworkCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAvailable(Landroid/net/Network;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onAvailable(Landroid/net/Network;)V

    invoke-static {}, Lcom/loc/o;->q()V

    return-void
.end method

.method public final onLost(Landroid/net/Network;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onLost(Landroid/net/Network;)V

    invoke-static {}, Lcom/loc/o;->q()V

    return-void
.end method
