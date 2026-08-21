.class Lcom/kuaishou/weapon/p0/cx$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/cx;->a(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Z

.field final synthetic c:I

.field final synthetic d:Lcom/kuaishou/weapon/p0/cx;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/cx;ZZI)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cx$1;->d:Lcom/kuaishou/weapon/p0/cx;

    iput-boolean p2, p0, Lcom/kuaishou/weapon/p0/cx$1;->a:Z

    iput-boolean p3, p0, Lcom/kuaishou/weapon/p0/cx$1;->b:Z

    iput p4, p0, Lcom/kuaishou/weapon/p0/cx$1;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 17

    move-object/from16 v0, p0

    const-string v1, "apl_a1_1_upl_time"

    :try_start_0
    iget-object v2, v0, Lcom/kuaishou/weapon/p0/cx$1;->d:Lcom/kuaishou/weapon/p0/cx;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/cx;->a(Lcom/kuaishou/weapon/p0/cx;)Landroid/content/Context;

    move-result-object v2

    const-string v3, "re_po_rt"

    invoke-static {v2, v3}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v2

    const-string v3, "plc001_al_s"

    const/4 v4, 0x1

    invoke-virtual {v2, v3, v4}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    if-ne v3, v4, :cond_5

    iget-boolean v3, v0, Lcom/kuaishou/weapon/p0/cx$1;->a:Z

    if-nez v3, :cond_0

    iget-boolean v3, v0, Lcom/kuaishou/weapon/p0/cx$1;->b:Z

    if-eqz v3, :cond_5

    :cond_0
    iget-object v3, v0, Lcom/kuaishou/weapon/p0/cx$1;->d:Lcom/kuaishou/weapon/p0/cx;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/cx;->a(Lcom/kuaishou/weapon/p0/cx;)Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;)J

    move-result-wide v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    const-string v3, "plc001_al_i"

    const/16 v9, 0x8

    invoke-virtual {v2, v3, v9}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    int-to-long v9, v3

    const-wide/32 v11, 0x36ee80

    mul-long/2addr v9, v11

    const-string v3, "plc001_al_b"

    const/4 v13, 0x0

    invoke-virtual {v2, v3, v13}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    move-result v3

    const-string v13, "plc001_a_aor"

    const/16 v14, 0x14

    invoke-virtual {v2, v13, v14}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;I)I

    const-wide/16 v13, 0x0

    cmp-long v2, v5, v13

    if-lez v2, :cond_1

    sub-long v13, v7, v5

    sget v2, Lcom/kuaishou/weapon/p0/WeaponHI;->ii:I

    move-wide v15, v5

    int-to-long v4, v2

    mul-long/2addr v4, v11

    cmp-long v2, v13, v4

    if-gez v2, :cond_2

    sget-object v2, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    if-eqz v2, :cond_2

    new-instance v2, Ljava/util/Date;

    invoke-direct {v2, v7, v8}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2}, Ljava/util/Date;->getHours()I

    move-result v2

    sget-object v4, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v4, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    return-void

    :cond_1
    move-wide v15, v5

    :cond_2
    sub-long v4, v7, v15

    cmp-long v2, v4, v9

    if-gez v2, :cond_4

    iget v2, v0, Lcom/kuaishou/weapon/p0/cx$1;->c:I

    const/16 v4, 0x64

    if-ne v2, v4, :cond_3

    const/4 v2, 0x1

    if-eq v3, v2, :cond_4

    :cond_3
    iget v2, v0, Lcom/kuaishou/weapon/p0/cx$1;->c:I

    const/16 v3, 0x6a

    if-ne v2, v3, :cond_5

    :cond_4
    new-instance v2, Lcom/kuaishou/weapon/p0/ch;

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/cx$1;->d:Lcom/kuaishou/weapon/p0/cx;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/cx;->a(Lcom/kuaishou/weapon/p0/cx;)Landroid/content/Context;

    move-result-object v3

    iget v4, v0, Lcom/kuaishou/weapon/p0/cx$1;->c:I

    invoke-direct {v2, v3, v4}, Lcom/kuaishou/weapon/p0/ch;-><init>(Landroid/content/Context;I)V

    sget-object v3, Lcom/kuaishou/weapon/p0/cj;->d:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/kuaishou/weapon/p0/ch;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v0, Lcom/kuaishou/weapon/p0/cx$1;->d:Lcom/kuaishou/weapon/p0/cx;

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/cx;->a(Lcom/kuaishou/weapon/p0/cx;)Landroid/content/Context;

    move-result-object v3

    sget-object v4, Lcom/kuaishou/weapon/p0/cj;->d:Ljava/lang/String;

    const/4 v5, 0x1

    invoke-static {v3, v2, v4, v5, v5}, Lcom/kuaishou/weapon/p0/co;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZ)V

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/cx$1;->d:Lcom/kuaishou/weapon/p0/cx;

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/cx;->a(Lcom/kuaishou/weapon/p0/cx;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object v2

    invoke-virtual {v2, v1, v7, v8}, Lcom/kuaishou/weapon/p0/df;->a(Ljava/lang/String;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_5
    return-void
.end method
