.class Lcom/kuaishou/weapon/p0/da$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/da;->a(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:I

.field final synthetic c:Lcom/kuaishou/weapon/p0/da;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/da;II)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    iput p2, p0, Lcom/kuaishou/weapon/p0/da$1;->a:I

    iput p3, p0, Lcom/kuaishou/weapon/p0/da$1;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 20

    move-object/from16 v0, p0

    const-string v1, "es_a1_1_upl_time"

    :try_start_0
    iget-object v2, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v2

    const-string v3, "re_po_rt"

    invoke-static {v2, v3}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v2

    const-string v3, "plc001_r_s"

    const/4 v4, 0x1

    invoke-virtual {v2, v3, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    if-ne v3, v4, :cond_4

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;)J

    move-result-wide v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    const-string v3, "plc001_r_i"

    invoke-virtual {v2, v3, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    int-to-long v9, v3

    const-wide/32 v11, 0x36ee80

    mul-long v16, v9, v11

    const-string v3, "plc001_r_o"

    const/4 v9, 0x5

    invoke-virtual {v2, v3, v9}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    int-to-long v9, v3

    const-wide/32 v13, 0xea60

    mul-long/2addr v9, v13

    const-string v3, "plc001_r_b"

    const/4 v15, 0x0

    invoke-virtual {v2, v3, v15}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v2

    const-wide/16 v18, 0x0

    cmp-long v3, v5, v18

    if-lez v3, :cond_0

    sub-long v18, v7, v5

    sget v3, Lcom/kuaishou/weapon/p0/WeaponHI;->ii:I

    int-to-long v13, v3

    mul-long/2addr v13, v11

    cmp-long v3, v18, v13

    if-gez v3, :cond_0

    sget-object v3, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    if-eqz v3, :cond_0

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v7, v8}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3}, Ljava/util/Date;->getHours()I

    move-result v3

    sget-object v13, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v14, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v13, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    const/16 v2, 0x3c

    invoke-virtual {v1, v2}, Ljava/util/Random;->nextInt(I)I

    move-result v1

    add-int/2addr v1, v4

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v3

    const-string v4, "com.kuaishou.weapon.p0.env.action"

    sget-object v2, Lcom/kuaishou/weapon/p0/cj;->c:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v5

    int-to-long v1, v1

    const-wide/32 v6, 0xea60

    mul-long/2addr v1, v6

    add-long v6, v1, v11

    const-string v8, "env://"

    invoke-static/range {v3 .. v8}, Lcom/kuaishou/weapon/p0/de;->a(Landroid/content/Context;Ljava/lang/String;IJLjava/lang/String;)V

    return-void

    :cond_0
    sub-long v5, v7, v5

    cmp-long v3, v5, v16

    if-gez v3, :cond_3

    iget v3, v0, Lcom/kuaishou/weapon/p0/da$1;->a:I

    const/16 v11, 0x64

    if-ne v3, v11, :cond_1

    if-eq v2, v4, :cond_3

    :cond_1
    iget v2, v0, Lcom/kuaishou/weapon/p0/da$1;->a:I

    const/16 v3, 0x6a

    if-eq v2, v3, :cond_3

    iget v2, v0, Lcom/kuaishou/weapon/p0/da$1;->a:I

    if-eq v2, v11, :cond_2

    iget v2, v0, Lcom/kuaishou/weapon/p0/da$1;->a:I

    if-lez v2, :cond_2

    cmp-long v2, v5, v9

    if-ltz v2, :cond_2

    goto :goto_0

    :cond_2
    iget-object v1, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v7

    const-string v8, "com.kuaishou.weapon.p0.env.action"

    sget-object v1, Lcom/kuaishou/weapon/p0/cj;->c:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v9

    sub-long v10, v16, v5

    const-string v12, "env://"

    invoke-static/range {v7 .. v12}, Lcom/kuaishou/weapon/p0/de;->a(Landroid/content/Context;Ljava/lang/String;IJLjava/lang/String;)V

    goto :goto_1

    :cond_3
    :goto_0
    new-instance v2, Lcom/kuaishou/weapon/p0/ck;

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v3

    iget v5, v0, Lcom/kuaishou/weapon/p0/da$1;->a:I

    iget v6, v0, Lcom/kuaishou/weapon/p0/da$1;->b:I

    invoke-direct {v2, v3, v5, v6}, Lcom/kuaishou/weapon/p0/ck;-><init>(Landroid/content/Context;II)V

    sget-object v3, Lcom/kuaishou/weapon/p0/cj;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/ck;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v3

    sget-object v5, Lcom/kuaishou/weapon/p0/cj;->c:Ljava/lang/String;

    invoke-static {v3, v2, v5, v4, v4}, Lcom/kuaishou/weapon/p0/co;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZ)V

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v2

    invoke-virtual {v2, v1, v7, v8}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;J)V

    iget-object v1, v0, Lcom/kuaishou/weapon/p0/da$1;->c:Lcom/kuaishou/weapon/p0/da;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/da;->a(Lcom/kuaishou/weapon/p0/da;)Landroid/content/Context;

    move-result-object v13

    const-string v14, "com.kuaishou.weapon.p0.env.action"

    sget-object v1, Lcom/kuaishou/weapon/p0/cj;->c:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v15

    const-string v18, "env://"

    invoke-static/range {v13 .. v18}, Lcom/kuaishou/weapon/p0/de;->a(Landroid/content/Context;Ljava/lang/String;IJLjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_4
    :goto_1
    return-void
.end method
