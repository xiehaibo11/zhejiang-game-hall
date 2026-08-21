.class public final Lcom/kwad/components/core/webview/jshandler/au;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/au$b;,
        Lcom/kwad/components/core/webview/jshandler/au$a;
    }
.end annotation


# static fields
.field private static VH:Landroid/os/Handler;


# instance fields
.field private JG:Lcom/kwad/components/core/e/d/c;

.field private VG:Lcom/kwad/sdk/core/webview/b;

.field private VI:Lcom/kwad/components/core/webview/jshandler/au$b;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/core/webview/jshandler/au$b;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/au;->VG:Lcom/kwad/sdk/core/webview/b;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/au;->JG:Lcom/kwad/components/core/e/d/c;

    iput-object p3, p0, Lcom/kwad/components/core/webview/jshandler/au;->VI:Lcom/kwad/components/core/webview/jshandler/au$b;

    sget-object p1, Lcom/kwad/components/core/webview/jshandler/au;->VH:Landroid/os/Handler;

    if-nez p1, :cond_0

    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object p1, Lcom/kwad/components/core/webview/jshandler/au;->VH:Landroid/os/Handler;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/webview/jshandler/au;)Lcom/kwad/components/core/webview/jshandler/au$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/webview/jshandler/au;->VI:Lcom/kwad/components/core/webview/jshandler/au$b;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    return-void

    :cond_0
    new-instance p2, Lcom/kwad/components/core/webview/jshandler/au$a;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/jshandler/au$a;-><init>()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/webview/jshandler/au$a;->parseJson(Lorg/json/JSONObject;)V

    iget p1, p2, Lcom/kwad/components/core/webview/jshandler/au$a;->jG:I

    sget-object p2, Lcom/kwad/components/core/webview/jshandler/au;->VH:Landroid/os/Handler;

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/au$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/webview/jshandler/au$1;-><init>(Lcom/kwad/components/core/webview/jshandler/au;I)V

    invoke-virtual {p2, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "playableConvert"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
