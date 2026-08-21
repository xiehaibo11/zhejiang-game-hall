.class final Lcom/mbridge/msdk/mbnative/controller/NativeController$5;
.super Ljava/lang/Object;
.source "NativeController.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/e/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(JIZLjava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/util/UUID;

.field final synthetic d:J

.field final synthetic e:I

.field final synthetic f:Ljava/lang/String;

.field final synthetic g:Lcom/mbridge/msdk/mbnative/controller/NativeController;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;ZLjava/lang/String;Ljava/util/UUID;JILjava/lang/String;)V
    .locals 0

    .line 2059
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    iput-boolean p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->c:Ljava/util/UUID;

    iput-wide p5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->d:J

    iput p7, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->e:I

    iput-object p8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->f:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
    .locals 1

    .line 2063
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->e:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-ne p1, v0, :cond_0

    .line 2064
    iget-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    move-result-object p1

    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController$5;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
