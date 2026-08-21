.class final Lcom/mbridge/msdk/advanced/b/a$6$2;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a$6;->a(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/advanced/b/a$6;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a$6;Ljava/lang/String;)V
    .locals 0

    .line 394
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6$2;->b:Lcom/mbridge/msdk/advanced/b/a$6;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$6$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 397
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$6$2;->b:Lcom/mbridge/msdk/advanced/b/a$6;

    iget-object v0, v0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a$6$2;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$6$2;->b:Lcom/mbridge/msdk/advanced/b/a$6;

    iget-object v2, v2, Lcom/mbridge/msdk/advanced/b/a$6;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/a$6$2;->b:Lcom/mbridge/msdk/advanced/b/a$6;

    iget v3, v3, Lcom/mbridge/msdk/advanced/b/a$6;->b:I

    invoke-static {v0, v1, v2, v3}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
