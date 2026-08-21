.class final Lcom/mbridge/msdk/advanced/b/a$11;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a;->g(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/io/File;

.field final synthetic b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic c:I

.field final synthetic d:Lcom/mbridge/msdk/advanced/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a;Ljava/io/File;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 772
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$11;->d:Lcom/mbridge/msdk/advanced/b/a;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$11;->a:Ljava/io/File;

    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/a$11;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p4, p0, Lcom/mbridge/msdk/advanced/b/a$11;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 775
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$11;->d:Lcom/mbridge/msdk/advanced/b/a;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "file:////"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$11;->a:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$11;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v3, p0, Lcom/mbridge/msdk/advanced/b/a$11;->c:I

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    return-void
.end method
