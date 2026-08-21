.class final Lcom/mbridge/msdk/advanced/b/a$6$1;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a$6;->a(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/mbridge/msdk/advanced/b/a$6;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a$6;I)V
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6$1;->b:Lcom/mbridge/msdk/advanced/b/a$6;

    iput p2, p0, Lcom/mbridge/msdk/advanced/b/a$6$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 381
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$6$1;->b:Lcom/mbridge/msdk/advanced/b/a$6;

    iget-object v0, v0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a$6$1;->b:Lcom/mbridge/msdk/advanced/b/a$6;

    iget-object v1, v1, Lcom/mbridge/msdk/advanced/b/a$6;->a:Ljava/lang/String;

    iget v2, p0, Lcom/mbridge/msdk/advanced/b/a$6$1;->a:I

    const-string v3, "Exception after load success"

    invoke-static {v0, v3, v1, v2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
