.class Lcom/kuaishou/weapon/p0/cw$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/cw;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/kuaishou/weapon/p0/cw;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/cw;I)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cw$1;->b:Lcom/kuaishou/weapon/p0/cw;

    iput p2, p0, Lcom/kuaishou/weapon/p0/cw$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 16

    move-object/from16 v0, p0

    const-string v1, "act_a1_1_upl_time"

    :try_start_0
    iget-object v2, v0, Lcom/kuaishou/weapon/p0/cw$1;->b:Lcom/kuaishou/weapon/p0/cw;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/cw;->a(Lcom/kuaishou/weapon/p0/cw;)Landroid/content/Context;

    move-result-object v2

    const-string v3, "re_po_rt"

    invoke-static {v2, v3}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v2

    const-string v3, "plc001_act_s"

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    const/4 v5, 0x1

    if-ne v3, v5, :cond_2

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/cw$1;->b:Lcom/kuaishou/weapon/p0/cw;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/cw;->a(Lcom/kuaishou/weapon/p0/cw;)Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;)J

    move-result-wide v6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    const-string v3, "plc001_act_i"

    const/16 v10, 0x8

    invoke-virtual {v2, v3, v10}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    int-to-long v10, v3

    const-wide/32 v12, 0x36ee80

    mul-long/2addr v10, v12

    const-string v3, "plc001_al_b"

    invoke-virtual {v2, v3, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v2

    const-wide/16 v14, 0x0

    cmp-long v3, v6, v14

    if-lez v3, :cond_0

    sub-long v14, v8, v6

    sget v3, Lcom/kuaishou/weapon/p0/WeaponHI;->ii:I

    int-to-long v4, v3

    mul-long/2addr v4, v12

    cmp-long v3, v14, v4

    if-gez v3, :cond_0

    sget-object v3, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    if-eqz v3, :cond_0

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v8, v9}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3}, Ljava/util/Date;->getHours()I

    move-result v3

    sget-object v4, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v4, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    return-void

    :cond_0
    sub-long v3, v8, v6

    cmp-long v3, v3, v10

    if-gez v3, :cond_1

    iget v3, v0, Lcom/kuaishou/weapon/p0/cw$1;->a:I

    const/16 v4, 0x6a

    if-eq v3, v4, :cond_1

    iget v3, v0, Lcom/kuaishou/weapon/p0/cw$1;->a:I

    const/16 v4, 0x64

    if-ne v3, v4, :cond_2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_2

    :cond_1
    new-instance v2, Lcom/kuaishou/weapon/p0/cg;

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/cw$1;->b:Lcom/kuaishou/weapon/p0/cw;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/cw;->a(Lcom/kuaishou/weapon/p0/cw;)Landroid/content/Context;

    move-result-object v3

    iget v4, v0, Lcom/kuaishou/weapon/p0/cw$1;->a:I

    invoke-direct {v2, v3, v4}, Lcom/kuaishou/weapon/p0/cg;-><init>(Landroid/content/Context;I)V

    sget-object v3, Lcom/kuaishou/weapon/p0/cj;->i:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/cg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/cw$1;->b:Lcom/kuaishou/weapon/p0/cw;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/cw;->a(Lcom/kuaishou/weapon/p0/cw;)Landroid/content/Context;

    move-result-object v3

    sget-object v4, Lcom/kuaishou/weapon/p0/cj;->i:Ljava/lang/String;

    const/4 v5, 0x1

    const/4 v6, 0x0

    invoke-static {v3, v2, v4, v6, v5}, Lcom/kuaishou/weapon/p0/co;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZ)V

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/cw$1;->b:Lcom/kuaishou/weapon/p0/cw;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/cw;->a(Lcom/kuaishou/weapon/p0/cw;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v2

    invoke-virtual {v2, v1, v8, v9}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method
