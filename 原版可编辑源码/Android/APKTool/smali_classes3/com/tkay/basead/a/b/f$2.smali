.class final Lcom/tkay/basead/a/b/f$2;
.super Lcom/tkay/core/common/res/a/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/b/f;-><init>(Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/h;

.field final synthetic b:Lcom/tkay/basead/a/b/f;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/b/f;Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    iput-object p2, p0, Lcom/tkay/basead/a/b/f$2;->a:Lcom/tkay/core/common/f/h;

    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a$b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(JJJJJ)V
    .locals 16

    move-object/from16 v0, p0

    .line 59
    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->a:Lcom/tkay/core/common/f/h;

    new-instance v2, Lcom/tkay/basead/c/i;

    const-string v3, ""

    invoke-direct {v2, v3, v3}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v3, 0x1e

    invoke-static {v3, v1, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 60
    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->c(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object v2

    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->d(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object v3

    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->b(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object v4

    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    .line 61
    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->e(Lcom/tkay/basead/a/b/f;)I

    move-result v13

    sub-long v14, p9, p7

    const-string v5, "1"

    const/4 v8, 0x0

    move-wide/from16 v6, p1

    move-wide/from16 v9, p3

    move-wide/from16 v11, p5

    .line 60
    invoke-static/range {v2 .. v15}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;JJIJ)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;JJJJ)V
    .locals 16

    move-object/from16 v0, p0

    .line 67
    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->c(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object v2

    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->d(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object v3

    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->b(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object v4

    iget-object v1, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    .line 68
    invoke-static {v1}, Lcom/tkay/basead/a/b/f;->e(Lcom/tkay/basead/a/b/f;)I

    move-result v13

    sub-long v14, p9, p7

    const-string v5, "0"

    const-wide/16 v11, 0x0

    move-wide/from16 v6, p3

    move-object/from16 v8, p2

    move-wide/from16 v9, p5

    .line 67
    invoke-static/range {v2 .. v15}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;JJIJ)V

    .line 69
    invoke-static {}, Lcom/tkay/basead/a/b/d;->a()Lcom/tkay/basead/a/b/d;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/basead/a/b/f$2;->b:Lcom/tkay/basead/a/b/f;

    invoke-static {v2}, Lcom/tkay/basead/a/b/f;->b(Lcom/tkay/basead/a/b/f;)Ljava/lang/String;

    move-result-object v2

    invoke-static/range {p1 .. p2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/tkay/basead/a/b/d;->a(Ljava/lang/String;Lcom/tkay/basead/c/e;)V

    return-void
.end method
