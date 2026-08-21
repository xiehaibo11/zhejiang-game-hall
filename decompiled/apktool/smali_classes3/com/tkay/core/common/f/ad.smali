.class public final Lcom/tkay/core/common/f/ad;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/f/ad$a;
    }
.end annotation


# instance fields
.field public a:I

.field public b:Ljava/lang/String;

.field public c:I

.field public d:I

.field public e:J

.field public f:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/ad$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/tkay/core/common/f/ad;->f:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    .line 38
    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/ad$a;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method
