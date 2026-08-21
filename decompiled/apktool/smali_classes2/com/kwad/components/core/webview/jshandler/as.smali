.class public final Lcom/kwad/components/core/webview/jshandler/as;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/as$b;,
        Lcom/kwad/components/core/webview/jshandler/as$a;
    }
.end annotation


# instance fields
.field private TU:Lcom/kwad/sdk/core/webview/c/c;

.field private Vy:Lcom/kwad/components/core/webview/jshandler/as$b;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/webview/jshandler/as$b;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/as;->Vy:Lcom/kwad/components/core/webview/jshandler/as$b;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/as;)Lcom/kwad/sdk/core/webview/c/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/as;->TU:Lcom/kwad/sdk/core/webview/c/c;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/as;Lcom/kwad/components/core/webview/jshandler/as$a;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/webview/jshandler/as;->b(Lcom/kwad/components/core/webview/jshandler/as$a;)V

    return-void
.end method

.method private b(Lcom/kwad/components/core/webview/jshandler/as$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/as;->Vy:Lcom/kwad/components/core/webview/jshandler/as$b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/core/webview/jshandler/as$b;->a(Lcom/kwad/components/core/webview/jshandler/as$a;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/as;->TU:Lcom/kwad/sdk/core/webview/c/c;

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/as$a;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/as$a;-><init>()V

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/jshandler/as$a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    new-instance p1, Lcom/kwad/components/core/webview/jshandler/as$1;

    invoke-direct {p1, p0, p2}, Lcom/kwad/components/core/webview/jshandler/as$1;-><init>(Lcom/kwad/components/core/webview/jshandler/as;Lcom/kwad/components/core/webview/jshandler/as$a;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "setHeaderBar"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/as;->Vy:Lcom/kwad/components/core/webview/jshandler/as$b;

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/as;->TU:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method
