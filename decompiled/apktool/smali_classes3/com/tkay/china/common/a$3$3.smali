.class final Lcom/tkay/china/common/a$3$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/a$3;->b(Lcom/tkay/china/common/a/e;JJ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/common/a/e;

.field final synthetic b:J

.field final synthetic c:J

.field final synthetic d:Lcom/tkay/china/common/a$3;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/a$3;Lcom/tkay/china/common/a/e;JJ)V
    .locals 0

    .line 364
    iput-object p1, p0, Lcom/tkay/china/common/a$3$3;->d:Lcom/tkay/china/common/a$3;

    iput-object p2, p0, Lcom/tkay/china/common/a$3$3;->a:Lcom/tkay/china/common/a/e;

    iput-wide p3, p0, Lcom/tkay/china/common/a$3$3;->b:J

    iput-wide p5, p0, Lcom/tkay/china/common/a$3$3;->c:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 367
    iget-object v0, p0, Lcom/tkay/china/common/a$3$3;->d:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/china/common/a$3$3;->a:Lcom/tkay/china/common/a/e;

    iget-wide v3, p0, Lcom/tkay/china/common/a$3$3;->b:J

    iget-wide v5, p0, Lcom/tkay/china/common/a$3$3;->c:J

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;JJ)V

    return-void
.end method
