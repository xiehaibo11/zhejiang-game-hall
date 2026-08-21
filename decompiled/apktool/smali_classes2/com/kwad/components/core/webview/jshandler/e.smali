.class public final Lcom/kwad/components/core/webview/jshandler/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/e$b;,
        Lcom/kwad/components/core/webview/jshandler/e$a;
    }
.end annotation


# instance fields
.field private Tv:Lcom/kwad/sdk/core/webview/c/c;

.field private Tw:Lcom/kwad/components/core/webview/jshandler/i;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/webview/jshandler/i;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/e;->Tw:Lcom/kwad/components/core/webview/jshandler/i;

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/a/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/e;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/e;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    :try_start_0
    new-instance p2, Lcom/kwad/components/core/webview/jshandler/e$a;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/e$a;-><init>()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/jshandler/e$a;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {p2}, Lcom/kwad/components/core/webview/jshandler/e$a;->getTarget()Ljava/lang/String;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/e;->Tw:Lcom/kwad/components/core/webview/jshandler/i;

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/e;->Tw:Lcom/kwad/components/core/webview/jshandler/i;

    invoke-interface {p2, p0, p1}, Lcom/kwad/components/core/webview/jshandler/i;->a(Lcom/kwad/components/core/webview/jshandler/e;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method public final aM(I)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/e$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/e$b;-><init>()V

    iput p1, v0, Lcom/kwad/components/core/webview/jshandler/e$b;->KR:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/webview/jshandler/e;->a(Lcom/kwad/sdk/core/response/a/a;)V

    return-void
.end method

.method public final aM(Z)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/e$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/e$b;-><init>()V

    iput p1, v0, Lcom/kwad/components/core/webview/jshandler/e$b;->Tz:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/webview/jshandler/e;->a(Lcom/kwad/sdk/core/response/a/a;)V

    return-void
.end method

.method public final f(Lcom/kwad/components/core/playable/PlayableSource;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/core/webview/jshandler/e$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/e$b;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/components/core/playable/PlayableSource;->getCode()I

    move-result p1

    iput p1, v0, Lcom/kwad/components/core/webview/jshandler/e$b;->Ty:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/webview/jshandler/e;->a(Lcom/kwad/sdk/core/response/a/a;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getNativeData"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/e;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method
