.class final Lcom/tramini/plugin/a/g/b/a$1;
.super Lcom/tramini/plugin/a/g/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:J

.field final synthetic b:Ljava/lang/Runnable;

.field final synthetic c:Lcom/tramini/plugin/a/g/b/a;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/g/b/a;JLjava/lang/Runnable;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/tramini/plugin/a/g/b/a$1;->c:Lcom/tramini/plugin/a/g/b/a;

    iput-wide p2, p0, Lcom/tramini/plugin/a/g/b/a$1;->a:J

    iput-object p4, p0, Lcom/tramini/plugin/a/g/b/a$1;->b:Ljava/lang/Runnable;

    invoke-direct {p0}, Lcom/tramini/plugin/a/g/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 56
    :try_start_0
    iget-wide v0, p0, Lcom/tramini/plugin/a/g/b/a$1;->a:J

    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 60
    :catch_0
    iget-object v0, p0, Lcom/tramini/plugin/a/g/b/a$1;->b:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    return-void
.end method
