.class public final Lcom/kwad/components/core/webview/jshandler/ao;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/ao$a;
    }
.end annotation


# instance fields
.field private final Vr:Lcom/kwad/components/core/webview/jshandler/ao$a;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/webview/jshandler/ao$a;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ao;->Vr:Lcom/kwad/components/core/webview/jshandler/ao$a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/ao;)Lcom/kwad/components/core/webview/jshandler/ao$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/ao;->Vr:Lcom/kwad/components/core/webview/jshandler/ao$a;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    new-instance p1, Lcom/kwad/components/core/webview/jshandler/ao$1;

    invoke-direct {p1, p0, p2}, Lcom/kwad/components/core/webview/jshandler/ao$1;-><init>(Lcom/kwad/components/core/webview/jshandler/ao;Lcom/kwad/sdk/core/webview/c/c;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerMotionListener"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
