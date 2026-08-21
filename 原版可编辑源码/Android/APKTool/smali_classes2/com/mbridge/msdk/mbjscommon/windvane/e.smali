.class public final Lcom/mbridge/msdk/mbjscommon/windvane/e;
.super Ljava/lang/Object;
.source "MVCallJs.java"


# static fields
.field private static a:Lcom/mbridge/msdk/mbjscommon/windvane/e;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 7
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/e;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/e;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a:Lcom/mbridge/msdk/mbjscommon/windvane/e;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/mbjscommon/windvane/e;
    .locals 1

    .line 13
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/e;->a:Lcom/mbridge/msdk/mbjscommon/windvane/e;

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 87
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v0, :cond_1

    .line 88
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 90
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array p2, v1, [Ljava/lang/Object;

    .line 91
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v0, p2, v2

    const-string v0, "javascript:window.OfferWall.onSuccess(%s,\'\');"

    invoke-static {v0, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    .line 95
    :cond_0
    invoke-static {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/k;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 96
    iget-object v3, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->g:Ljava/lang/String;

    aput-object v3, v0, v2

    aput-object p2, v0, v1

    const-string p2, "javascript:window.OfferWall.onSuccess(%s,\'%s\');"

    invoke-static {p2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    .line 100
    :goto_0
    iget-object v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 102
    :try_start_0
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 106
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception p1

    .line 104
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method
