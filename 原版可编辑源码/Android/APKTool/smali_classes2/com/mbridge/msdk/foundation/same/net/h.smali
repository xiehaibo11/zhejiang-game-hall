.class public Lcom/mbridge/msdk/foundation/same/net/h;
.super Ljava/lang/Object;
.source "NetworkDispatcher.java"


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/mbridge/msdk/foundation/same/net/stack/a;

.field private c:Lcom/mbridge/msdk/foundation/same/net/g;

.field private d:Lcom/mbridge/msdk/foundation/same/net/c;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    const-class v0, Lcom/mbridge/msdk/foundation/same/net/h;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/same/net/h;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljavax/net/ssl/SSLSocketFactory;Lcom/mbridge/msdk/foundation/same/net/c;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    new-instance p1, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack;

    invoke-direct {p1}, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/h;->b:Lcom/mbridge/msdk/foundation/same/net/stack/a;

    .line 49
    new-instance p1, Lcom/mbridge/msdk/foundation/same/net/e/a;

    iget-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/h;->b:Lcom/mbridge/msdk/foundation/same/net/stack/a;

    invoke-direct {p1, p2, p3}, Lcom/mbridge/msdk/foundation/same/net/e/a;-><init>(Lcom/mbridge/msdk/foundation/same/net/stack/a;Lcom/mbridge/msdk/foundation/same/net/c;)V

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/h;->c:Lcom/mbridge/msdk/foundation/same/net/g;

    .line 50
    iput-object p3, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/foundation/same/net/i;)V
    .locals 4

    const/16 v0, 0xa

    .line 58
    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    .line 1066
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/h;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "network-queue-take request="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/i;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1067
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/net/c;->c(Lcom/mbridge/msdk/foundation/same/net/i;)V

    .line 1071
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/i;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "network-discard-cancelled"

    .line 1072
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/same/net/i;->a(Ljava/lang/String;)V

    .line 1073
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/net/c;->b(Lcom/mbridge/msdk/foundation/same/net/i;)V

    .line 1074
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/net/c;->a(Lcom/mbridge/msdk/foundation/same/net/i;)V

    goto :goto_0

    .line 1079
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/net/c;->d(Lcom/mbridge/msdk/foundation/same/net/i;)V

    .line 1080
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/h;->c:Lcom/mbridge/msdk/foundation/same/net/g;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g;->a(Lcom/mbridge/msdk/foundation/same/net/i;)Lcom/mbridge/msdk/foundation/same/net/e/c;

    move-result-object v0

    .line 1081
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/h;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "network-http-complete networkResponse="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, v0, Lcom/mbridge/msdk/foundation/same/net/e/c;->a:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1084
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/same/net/i;->a(Lcom/mbridge/msdk/foundation/same/net/e/c;)Lcom/mbridge/msdk/foundation/same/net/k;

    move-result-object v0

    .line 1085
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/h;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "network-parse-complete response="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/mbridge/msdk/foundation/same/net/k;->a:Ljava/lang/Object;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1088
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v1, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/c;->a(Lcom/mbridge/msdk/foundation/same/net/i;Lcom/mbridge/msdk/foundation/same/net/k;)V
    :try_end_0
    .catch Lcom/mbridge/msdk/foundation/same/net/a/a; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1093
    sget-object v1, Lcom/mbridge/msdk/foundation/same/net/h;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unhandled exception "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1094
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    new-instance v1, Lcom/mbridge/msdk/foundation/same/net/a/a;

    const/4 v2, 0x4

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/net/a/a;-><init>(ILcom/mbridge/msdk/foundation/same/net/e/c;)V

    invoke-interface {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/net/c;->a(Lcom/mbridge/msdk/foundation/same/net/i;Lcom/mbridge/msdk/foundation/same/net/a/a;)V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 1091
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/h;->d:Lcom/mbridge/msdk/foundation/same/net/c;

    invoke-interface {v1, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/c;->a(Lcom/mbridge/msdk/foundation/same/net/i;Lcom/mbridge/msdk/foundation/same/net/a/a;)V

    :goto_0
    return-void
.end method
