.class final Lcom/kwad/sdk/crash/b$6;
.super Lcom/kwad/sdk/crash/report/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/crash/b;->En()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/report/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final Ey()Ljava/io/File;
    .locals 3

    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/a/a;->EM()Ljava/io/File;

    move-result-object v1

    const-string v2, "anr_log/upload"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Ljava/util/concurrent/CountDownLatch;)V
    .locals 2

    const-string v0, "ExceptionCollector"

    const-string v1, "ANR upload"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x3

    invoke-virtual {p0, p1, v0, p2}, Lcom/kwad/sdk/crash/b$6;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;ILjava/util/concurrent/CountDownLatch;)V

    return-void
.end method
