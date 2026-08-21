.class final Lcom/tkay/china/common/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/common/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/a;->e(Lcom/tkay/china/common/a/e;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/common/a;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/a;)V
    .locals 0

    .line 303
    iput-object p1, p0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/china/common/a/e;J)V
    .locals 3

    .line 330
    sget-object v0, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onSuccess: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 331
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/common/a$3$2;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/china/common/a$3$2;-><init>(Lcom/tkay/china/common/a$3;Lcom/tkay/china/common/a/e;J)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;JJ)V
    .locals 9

    .line 306
    sget-object v0, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onStartBefore: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p1, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 307
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v8, Lcom/tkay/china/common/a$3$1;

    move-object v1, v8

    move-object v2, p0

    move-wide v3, p2

    move-wide v5, p4

    move-object v7, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/china/common/a$3$1;-><init>(Lcom/tkay/china/common/a$3;JJLcom/tkay/china/common/a/e;)V

    invoke-virtual {v0, v8}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;JJI)V
    .locals 10

    .line 401
    sget-object v0, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    .line 402
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v9, Lcom/tkay/china/common/a$3$5;

    move-object v1, v9

    move-object v2, p0

    move-object v3, p1

    move/from16 v4, p6

    move-wide v5, p2

    move-wide v7, p4

    invoke-direct/range {v1 .. v8}, Lcom/tkay/china/common/a$3$5;-><init>(Lcom/tkay/china/common/a$3;Lcom/tkay/china/common/a/e;IJJ)V

    invoke-virtual {v0, v9}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/tkay/china/common/a/e;Ljava/lang/String;)V
    .locals 3

    .line 374
    sget-object v0, Lcom/tkay/china/common/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "("

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p1, Lcom/tkay/china/common/a/e;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ") download fail: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 375
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/common/a$3$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/china/common/a$3$4;-><init>(Lcom/tkay/china/common/a$3;Lcom/tkay/china/common/a/e;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Lcom/tkay/china/common/a/e;JJ)V
    .locals 9

    .line 364
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v8, Lcom/tkay/china/common/a$3$3;

    move-object v1, v8

    move-object v2, p0

    move-object v3, p1

    move-wide v4, p2

    move-wide v6, p4

    invoke-direct/range {v1 .. v7}, Lcom/tkay/china/common/a$3$3;-><init>(Lcom/tkay/china/common/a$3;Lcom/tkay/china/common/a/e;JJ)V

    invoke-virtual {v0, v8}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
