.class final Lcom/tkay/china/common/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/c;->a(IJLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:J

.field final synthetic d:Lcom/tkay/china/common/c;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/c;ILjava/lang/String;J)V
    .locals 0

    .line 141
    iput-object p1, p0, Lcom/tkay/china/common/c$1;->d:Lcom/tkay/china/common/c;

    iput p2, p0, Lcom/tkay/china/common/c$1;->a:I

    iput-object p3, p0, Lcom/tkay/china/common/c$1;->b:Ljava/lang/String;

    iput-wide p4, p0, Lcom/tkay/china/common/c$1;->c:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 145
    :try_start_0
    new-instance v0, Lcom/tkay/core/common/f/e;

    invoke-direct {v0}, Lcom/tkay/core/common/f/e;-><init>()V

    .line 146
    iget-object v1, p0, Lcom/tkay/china/common/c$1;->d:Lcom/tkay/china/common/c;

    iget-object v1, v1, Lcom/tkay/china/common/c;->b:Lcom/tkay/core/api/BaseAd;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/china/common/c$1;->d:Lcom/tkay/china/common/c;

    iget-object v1, v1, Lcom/tkay/china/common/c;->b:Lcom/tkay/core/api/BaseAd;

    invoke-virtual {v1}, Lcom/tkay/core/api/BaseAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v1

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/tkay/china/common/c$1;->d:Lcom/tkay/china/common/c;

    iget-object v1, v1, Lcom/tkay/china/common/c;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    :goto_0
    iput-object v1, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    .line 147
    iget v1, p0, Lcom/tkay/china/common/c$1;->a:I

    iput v1, v0, Lcom/tkay/core/common/f/e;->a:I

    .line 148
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/core/common/f/e;->c:J

    .line 149
    iget-object v1, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    instance-of v1, v1, Lcom/tkay/core/common/f/d;

    if-eqz v1, :cond_1

    .line 150
    iget-object v1, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    check-cast v1, Lcom/tkay/core/common/f/d;

    iget-object v2, p0, Lcom/tkay/china/common/c$1;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->b(Ljava/lang/String;)V

    .line 151
    iget-object v1, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    check-cast v1, Lcom/tkay/core/common/f/d;

    iget-wide v2, p0, Lcom/tkay/china/common/c$1;->c:J

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/d;->b(J)V

    .line 154
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v1

    .line 155
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v1

    .line 156
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/r;->a(Landroid/content/Context;)Lcom/tkay/core/common/r;

    move-result-object v2

    iget v3, p0, Lcom/tkay/china/common/c$1;->a:I

    invoke-virtual {v2, v3, v0, v1}, Lcom/tkay/core/common/r;->a(ILcom/tkay/core/common/f/e;Lcom/tkay/core/c/a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
