.class Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;


# direct methods
.method constructor <init>(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;Ljava/lang/String;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    iput-object p2, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "ASUS"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/a;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/a;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_4

    :cond_0
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "HUAWEI"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/b;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/b;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/b;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_4

    :cond_1
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "OPPO"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/g;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/g;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/g;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_4

    :cond_2
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "LENOVO"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/c;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/c;-><init>(Landroid/content/Context;)V

    :goto_0
    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/c;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_4

    :cond_3
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "MOTOLORA"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/c;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/c;-><init>(Landroid/content/Context;)V

    goto :goto_0

    :cond_4
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "MEIZU"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/d;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/d;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/d;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_4

    :cond_5
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "SAMSUNG"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/h;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/h;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/h;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto/16 :goto_4

    :cond_6
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "ONEPLUS"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/f;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/f;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/f;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto :goto_4

    :cond_7
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "ZTE"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/k;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/k;-><init>(Landroid/content/Context;)V

    :goto_1
    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;

    invoke-static {v1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/k;->a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V

    goto :goto_4

    :cond_8
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "FERRMEOS"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a()Z

    move-result v0

    if-eqz v0, :cond_9

    goto :goto_3

    :cond_9
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->a:Ljava/lang/String;

    const-string v1, "SSUI"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->b()Z

    move-result v0

    if-eqz v0, :cond_a

    goto :goto_2

    :cond_a
    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/k;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/k;-><init>(Landroid/content/Context;)V

    goto :goto_1

    :cond_b
    :goto_2
    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/k;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/k;-><init>(Landroid/content/Context;)V

    goto :goto_1

    :cond_c
    :goto_3
    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/k;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;->b:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/oaId/helpers/k;-><init>(Landroid/content/Context;)V

    goto :goto_1

    :goto_4
    return-void
.end method
