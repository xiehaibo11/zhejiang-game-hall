.class Lcom/kuaishou/weapon/p0/cy$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/cy;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/kuaishou/weapon/p0/cy;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/cy;I)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cy$1;->b:Lcom/kuaishou/weapon/p0/cy;

    iput p2, p0, Lcom/kuaishou/weapon/p0/cy$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 14

    const-string v0, "cpgc_a1_1_upl_time"

    :try_start_0
    iget-object v1, p0, Lcom/kuaishou/weapon/p0/cy$1;->b:Lcom/kuaishou/weapon/p0/cy;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/cy;->a(Lcom/kuaishou/weapon/p0/cy;)Landroid/content/Context;

    move-result-object v1

    const-string v2, "re_po_rt"

    invoke-static {v1, v2}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v1

    const-string v2, "plc002_pp_s"

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v2

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/cy$1;->b:Lcom/kuaishou/weapon/p0/cy;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/cy;->a(Lcom/kuaishou/weapon/p0/cy;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;)J

    move-result-wide v4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    const-string v2, "plc002_pp_i"

    const/16 v8, 0xc

    invoke-virtual {v1, v2, v8}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v1

    int-to-long v1, v1

    const-wide/32 v8, 0x36ee80

    mul-long/2addr v1, v8

    const-wide/16 v10, 0x0

    cmp-long v10, v4, v10

    if-lez v10, :cond_0

    sub-long v10, v6, v4

    sget v12, Lcom/kuaishou/weapon/p0/WeaponHI;->ii:I

    int-to-long v12, v12

    mul-long/2addr v12, v8

    cmp-long v8, v10, v12

    if-gez v8, :cond_0

    sget-object v8, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    if-eqz v8, :cond_0

    new-instance v8, Ljava/util/Date;

    invoke-direct {v8, v6, v7}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v8}, Ljava/util/Date;->getHours()I

    move-result v8

    sget-object v9, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v9, v8}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_0

    return-void

    :cond_0
    sub-long v4, v6, v4

    cmp-long v1, v4, v1

    if-gez v1, :cond_1

    iget v1, p0, Lcom/kuaishou/weapon/p0/cy$1;->a:I

    const/16 v2, 0x6a

    if-ne v1, v2, :cond_2

    :cond_1
    new-instance v1, Lcom/kuaishou/weapon/p0/ci;

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/cy$1;->b:Lcom/kuaishou/weapon/p0/cy;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/cy;->a(Lcom/kuaishou/weapon/p0/cy;)Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/kuaishou/weapon/p0/ci;-><init>(Landroid/content/Context;)V

    sget-object v2, Lcom/kuaishou/weapon/p0/cj;->g:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/ci;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/cy$1;->b:Lcom/kuaishou/weapon/p0/cy;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/cy;->a(Lcom/kuaishou/weapon/p0/cy;)Landroid/content/Context;

    move-result-object v2

    sget-object v4, Lcom/kuaishou/weapon/p0/cj;->g:Ljava/lang/String;

    invoke-static {v2, v1, v4, v3, v3}, Lcom/kuaishou/weapon/p0/co;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZ)V

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/cy$1;->b:Lcom/kuaishou/weapon/p0/cy;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/cy;->a(Lcom/kuaishou/weapon/p0/cy;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v1

    invoke-virtual {v1, v0, v6, v7}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method
