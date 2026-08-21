.class final Lcom/tkay/china/common/a/a/a$1;
.super Lcom/tkay/core/common/l/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/a/a/a;->b(Ljava/lang/Runnable;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:J

.field final synthetic b:Ljava/lang/Runnable;

.field final synthetic c:Lcom/tkay/china/common/a/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/a/a/a;Ljava/lang/Runnable;)V
    .locals 2

    .line 63
    iput-object p1, p0, Lcom/tkay/china/common/a/a/a$1;->c:Lcom/tkay/china/common/a/a/a;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/tkay/china/common/a/a/a$1;->a:J

    iput-object p2, p0, Lcom/tkay/china/common/a/a/a$1;->b:Ljava/lang/Runnable;

    invoke-direct {p0}, Lcom/tkay/core/common/l/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 67
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/china/common/a/a/a$1;->a:J

    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 73
    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "thread-"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/china/common/a/a/a$1;->b()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 74
    iget-object v0, p0, Lcom/tkay/china/common/a/a/a$1;->b:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    return-void
.end method
