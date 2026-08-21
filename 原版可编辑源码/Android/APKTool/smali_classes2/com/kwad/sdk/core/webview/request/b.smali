.class public final Lcom/kwad/sdk/core/webview/request/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/webview/request/b$a;
    }
.end annotation


# static fields
.field private static final mHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/kwad/sdk/core/webview/request/b;->mHandler:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic vW()Landroid/os/Handler;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/webview/request/b;->mHandler:Landroid/os/Handler;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/webview/d/b$a;Lcom/kwad/sdk/core/webview/request/b$a;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/webview/request/b$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/webview/request/b$1;-><init>(Lcom/kwad/sdk/core/webview/request/b;Lcom/kwad/sdk/core/webview/d/b$a;)V

    new-instance p1, Lcom/kwad/sdk/core/webview/request/b$2;

    invoke-direct {p1, p0, p2}, Lcom/kwad/sdk/core/webview/request/b$2;-><init>(Lcom/kwad/sdk/core/webview/request/b;Lcom/kwad/sdk/core/webview/request/b$a;)V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method
