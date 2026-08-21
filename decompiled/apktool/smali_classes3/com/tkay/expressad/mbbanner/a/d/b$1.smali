.class final Lcom/tkay/expressad/mbbanner/a/d/b$1;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/mbbanner/a/d/b;->c(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/expressad/mbbanner/a/d/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/b$1;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 126
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b$1;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Lcom/tkay/expressad/mbbanner/a/d/b;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b$1;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    invoke-static {v0}, Lcom/tkay/expressad/mbbanner/a/d/b;->b(Lcom/tkay/expressad/mbbanner/a/d/b;)Z

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b$1;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b$1;->a:Ljava/lang/String;

    const/4 v2, -0x1

    const/4 v3, 0x0

    const-string v4, ""

    invoke-virtual {v0, v1, v2, v4, v3}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    :cond_0
    return-void
.end method
