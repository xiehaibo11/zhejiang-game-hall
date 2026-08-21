.class final Lcom/mbridge/msdk/d/b$1;
.super Ljava/lang/Object;
.source "ShortCutsManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/app/Activity;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic d:Lcom/mbridge/msdk/d/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/d/b;Landroid/app/Activity;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 192
    iput-object p1, p0, Lcom/mbridge/msdk/d/b$1;->d:Lcom/mbridge/msdk/d/b;

    iput-object p2, p0, Lcom/mbridge/msdk/d/b$1;->a:Landroid/app/Activity;

    iput-object p3, p0, Lcom/mbridge/msdk/d/b$1;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/mbridge/msdk/d/b$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 195
    iget-object p1, p0, Lcom/mbridge/msdk/d/b$1;->d:Lcom/mbridge/msdk/d/b;

    iget-object p2, p0, Lcom/mbridge/msdk/d/b$1;->a:Landroid/app/Activity;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/d/b;Landroid/app/Activity;)V

    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 6

    .line 200
    iget-object p2, p0, Lcom/mbridge/msdk/d/b$1;->b:Landroid/content/Context;

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p2

    .line 201
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 203
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 205
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/d/b$1;->d:Lcom/mbridge/msdk/d/b;

    iget-object v2, p0, Lcom/mbridge/msdk/d/b$1;->b:Landroid/content/Context;

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/d/b;Landroid/content/Context;Lcom/mbridge/msdk/c/a;)V

    .line 206
    iget-object v1, p0, Lcom/mbridge/msdk/d/b$1;->d:Lcom/mbridge/msdk/d/b;

    const-string v2, "com.android.launcher.permission.INSTALL_SHORTCUT"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/d/b;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 207
    iget-object v1, p0, Lcom/mbridge/msdk/d/b$1;->d:Lcom/mbridge/msdk/d/b;

    iget-object v2, p0, Lcom/mbridge/msdk/d/b$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/d/b;->b(Lcom/mbridge/msdk/d/b;Ljava/lang/String;)I

    move-result v1

    .line 208
    iget-object v2, p0, Lcom/mbridge/msdk/d/b$1;->d:Lcom/mbridge/msdk/d/b;

    iget-object v3, p0, Lcom/mbridge/msdk/d/b$1;->b:Landroid/content/Context;

    iget-object v4, p0, Lcom/mbridge/msdk/d/b$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, p0, Lcom/mbridge/msdk/d/b$1;->a:Landroid/app/Activity;

    invoke-static {v2, v3, p1, v4, v5}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/d/b;Landroid/content/Context;Landroid/graphics/Bitmap;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/app/Activity;)V

    .line 209
    iget-object p1, p0, Lcom/mbridge/msdk/d/b$1;->d:Lcom/mbridge/msdk/d/b;

    iget-object v2, p0, Lcom/mbridge/msdk/d/b$1;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {p1, v2, v0, p2, v1}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/d/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/c/a;Lcom/mbridge/msdk/foundation/db/f;I)V

    :cond_1
    return-void
.end method
