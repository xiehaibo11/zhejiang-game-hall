.class public Lcom/sigmob/sdk/mraid/s$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/s;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private final a:Lcom/sigmob/sdk/base/views/e;

.field private final b:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/sigmob/sdk/base/common/t;",
            ">;"
        }
    .end annotation
.end field

.field private final c:Lcom/sigmob/sdk/base/common/r;

.field private final d:Lcom/sigmob/sdk/mraid/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/e;Lcom/sigmob/sdk/base/common/t;Lcom/sigmob/sdk/base/common/r;Lcom/sigmob/sdk/mraid/d;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/s$a;->a:Lcom/sigmob/sdk/base/views/e;

    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/s$a;->b:Ljava/lang/ref/WeakReference;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid/s$a;->c:Lcom/sigmob/sdk/base/common/r;

    iput-object p4, p0, Lcom/sigmob/sdk/mraid/s$a;->d:Lcom/sigmob/sdk/mraid/d;

    return-void
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/base/views/e;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/s$a;->a:Lcom/sigmob/sdk/base/views/e;

    return-object v0
.end method

.method public b()Ljava/lang/ref/WeakReference;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/sigmob/sdk/base/common/t;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/s$a;->b:Ljava/lang/ref/WeakReference;

    return-object v0
.end method

.method public c()Lcom/sigmob/sdk/base/common/r;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/s$a;->c:Lcom/sigmob/sdk/base/common/r;

    return-object v0
.end method

.method public d()Lcom/sigmob/sdk/mraid/d;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/s$a;->d:Lcom/sigmob/sdk/mraid/d;

    return-object v0
.end method
