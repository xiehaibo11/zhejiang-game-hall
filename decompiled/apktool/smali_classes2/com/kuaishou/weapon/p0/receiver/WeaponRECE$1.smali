.class Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/receiver/WeaponRECE;->onReceive(Landroid/content/Context;Landroid/content/Intent;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Intent;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/kuaishou/weapon/p0/receiver/WeaponRECE;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/receiver/WeaponRECE;Landroid/content/Intent;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->c:Lcom/kuaishou/weapon/p0/receiver/WeaponRECE;

    iput-object p2, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->a:Landroid/content/Intent;

    iput-object p3, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->a:Landroid/content/Intent;

    invoke-virtual {v0}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    const-string v1, "com.kuaishou.weapon.p0.env.action"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/da;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/da;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1}, Lcom/kuaishou/weapon/p0/da;->a(II)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/dc;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/dc;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kuaishou/weapon/p0/dc;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cx;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/cx;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kuaishou/weapon/p0/cx;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cy;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/cy;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kuaishou/weapon/p0/cy;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/dd;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/dd;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kuaishou/weapon/p0/dd;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cw;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/cw;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kuaishou/weapon/p0/cw;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/receiver/WeaponRECE$1;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/db;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/db;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/kuaishou/weapon/p0/db;->a(I)V

    :cond_1
    return-void
.end method
