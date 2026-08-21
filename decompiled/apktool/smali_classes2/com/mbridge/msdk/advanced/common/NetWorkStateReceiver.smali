.class public Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;
.super Landroid/content/BroadcastReceiver;
.source "NetWorkStateReceiver.java"


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Landroid/webkit/WebView;

.field private c:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    const-class v0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/webkit/WebView;)V
    .locals 0

    .line 29
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    .line 30
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    return-void
.end method

.method private a(Landroid/webkit/WebView;I)V
    .locals 3

    if-eqz p1, :cond_0

    .line 78
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "netstat"

    .line 79
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 80
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const-string v1, "onNetstatChanged"

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v2, 0x2

    invoke-static {v0, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 83
    sget-object p2, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 72
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    return-void
.end method

.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3

    :try_start_0
    const-string p2, "connectivity"

    .line 36
    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/net/ConnectivityManager;

    const/4 v0, 0x0

    if-nez p2, :cond_0

    .line 38
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a(Landroid/webkit/WebView;I)V

    return-void

    .line 41
    :cond_0
    sget-boolean v1, Lcom/mbridge/msdk/foundation/same/a;->h:Z

    if-eqz v1, :cond_6

    .line 42
    invoke-virtual {p2}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p2

    if-nez p2, :cond_1

    .line 44
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a(Landroid/webkit/WebView;I)V

    return-void

    .line 47
    :cond_1
    invoke-virtual {p2}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v1

    sget-object v2, Landroid/net/NetworkInfo$State;->CONNECTING:Landroid/net/NetworkInfo$State;

    if-eq v1, v2, :cond_5

    invoke-virtual {p2}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v1

    sget-object v2, Landroid/net/NetworkInfo$State;->DISCONNECTING:Landroid/net/NetworkInfo$State;

    if-ne v1, v2, :cond_2

    goto :goto_0

    .line 50
    :cond_2
    invoke-virtual {p2}, Landroid/net/NetworkInfo;->getType()I

    move-result p2

    const/4 v1, 0x1

    if-ne p2, v1, :cond_3

    .line 51
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    const/16 p2, 0x9

    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a(Landroid/webkit/WebView;I)V

    return-void

    :cond_3
    const-string p2, "phone"

    .line 54
    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    if-nez p1, :cond_4

    .line 56
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a(Landroid/webkit/WebView;I)V

    return-void

    .line 59
    :cond_4
    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->c:I

    .line 60
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(I)I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->c:I

    .line 61
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    invoke-direct {p0, p2, p1}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a(Landroid/webkit/WebView;I)V

    goto :goto_1

    :cond_5
    :goto_0
    return-void

    .line 64
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->b:Landroid/webkit/WebView;

    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a(Landroid/webkit/WebView;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 67
    sget-object p2, Lcom/mbridge/msdk/advanced/common/NetWorkStateReceiver;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method
