.class public final Lcom/loc/o$b;
.super Ljava/lang/Object;
.source "DeviceInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# static fields
.field private static a:Landroid/content/Context;

.field private static b:Landroid/content/BroadcastReceiver;

.field private static c:Landroid/net/ConnectivityManager;

.field private static d:Landroid/net/NetworkRequest;

.field private static e:Landroid/net/ConnectivityManager$NetworkCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;)V
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x18

    if-ge v0, v1, :cond_0

    if-eqz p1, :cond_2

    sget-object v0, Lcom/loc/o$b;->b:Landroid/content/BroadcastReceiver;

    if-nez v0, :cond_2

    new-instance v0, Lcom/loc/o$b$1;

    invoke-direct {v0, p0}, Lcom/loc/o$b$1;-><init>(Lcom/loc/o$b;)V

    sput-object v0, Lcom/loc/o$b;->b:Landroid/content/BroadcastReceiver;

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "WYW5kcm9pZC5uZXQuY29ubi5DT05ORUNUSVZJVFlfQ0hBTkdF"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget-object v1, Lcom/loc/o$b;->b:Landroid/content/BroadcastReceiver;

    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    return-void

    :cond_0
    const-string v0, "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/loc/o;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    if-eqz p1, :cond_2

    sget-object v0, Lcom/loc/o$b;->c:Landroid/net/ConnectivityManager;

    if-nez v0, :cond_2

    const-string v0, "connectivity"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    sput-object v0, Lcom/loc/o$b;->c:Landroid/net/ConnectivityManager;

    if-eqz v0, :cond_2

    new-instance v0, Landroid/net/NetworkRequest$Builder;

    invoke-direct {v0}, Landroid/net/NetworkRequest$Builder;-><init>()V

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Landroid/net/NetworkRequest$Builder;->addCapability(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/net/NetworkRequest$Builder;->addTransportType(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/net/NetworkRequest$Builder;->addTransportType(I)Landroid/net/NetworkRequest$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/NetworkRequest$Builder;->build()Landroid/net/NetworkRequest;

    move-result-object v0

    sput-object v0, Lcom/loc/o$b;->d:Landroid/net/NetworkRequest;

    new-instance v0, Lcom/loc/o$b$2;

    invoke-direct {v0, p0}, Lcom/loc/o$b$2;-><init>(Lcom/loc/o$b;)V

    sput-object v0, Lcom/loc/o$b;->e:Landroid/net/ConnectivityManager$NetworkCallback;

    sget-object v1, Lcom/loc/o$b;->c:Landroid/net/ConnectivityManager;

    sget-object v2, Lcom/loc/o$b;->d:Landroid/net/NetworkRequest;

    invoke-virtual {v1, v2, v0}, Landroid/net/ConnectivityManager;->registerNetworkCallback(Landroid/net/NetworkRequest;Landroid/net/ConnectivityManager$NetworkCallback;)V

    sput-object p1, Lcom/loc/o$b;->a:Landroid/content/Context;

    :cond_2
    return-void
.end method
