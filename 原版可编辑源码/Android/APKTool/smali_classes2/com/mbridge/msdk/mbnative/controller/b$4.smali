.class final Lcom/mbridge/msdk/mbnative/controller/b$4;
.super Ljava/lang/Object;
.source "NativePreloadController.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/e/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILjava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Z

.field final synthetic c:Ljava/util/UUID;

.field final synthetic d:I

.field final synthetic e:J

.field final synthetic f:I

.field final synthetic g:Ljava/lang/String;

.field final synthetic h:Lcom/mbridge/msdk/b/a/a;

.field final synthetic i:Lcom/mbridge/msdk/out/AdMobClickListener;

.field final synthetic j:Lcom/mbridge/msdk/mbnative/controller/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;ZLjava/util/UUID;IJILjava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 0

    .line 1283
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    iput-boolean p3, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->c:Ljava/util/UUID;

    iput p5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->d:I

    iput-wide p6, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->e:J

    iput p8, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->f:I

    iput-object p9, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->g:Ljava/lang/String;

    iput-object p10, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->h:Lcom/mbridge/msdk/b/a/a;

    iput-object p11, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->i:Lcom/mbridge/msdk/out/AdMobClickListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
    .locals 1

    .line 1287
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->e:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-ne p1, v0, :cond_0

    .line 1288
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;)Landroid/os/Handler;

    move-result-object p1

    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbnative/controller/b$4$1;-><init>(Lcom/mbridge/msdk/mbnative/controller/b$4;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
