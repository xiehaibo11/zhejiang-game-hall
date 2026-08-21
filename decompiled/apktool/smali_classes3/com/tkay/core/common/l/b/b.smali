.class public abstract Lcom/tkay/core/common/l/b/b;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# static fields
.field public static final d:I = 0x1

.field public static final e:I = 0x2

.field public static final f:I = 0x3


# instance fields
.field private a:J

.field private b:Ljava/lang/String;

.field protected g:Z

.field protected h:Lcom/tkay/core/common/l/b/c;

.field protected i:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 16
    iput-boolean v0, p0, Lcom/tkay/core/common/l/b/b;->g:Z

    .line 18
    iput v0, p0, Lcom/tkay/core/common/l/b/b;->i:I

    const-wide/16 v0, 0x0

    .line 19
    iput-wide v0, p0, Lcom/tkay/core/common/l/b/b;->a:J

    const-string v0, "topon-default-thread"

    .line 21
    iput-object v0, p0, Lcom/tkay/core/common/l/b/b;->b:Ljava/lang/String;

    return-void
.end method

.method private a(Lcom/tkay/core/common/l/b/c;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/tkay/core/common/l/b/b;->h:Lcom/tkay/core/common/l/b/c;

    return-void
.end method

.method private c()Ljava/lang/String;
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/core/common/l/b/b;->b:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public abstract a()V
.end method

.method public final a(J)V
    .locals 0

    .line 24
    iput-wide p1, p0, Lcom/tkay/core/common/l/b/b;->a:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/tkay/core/common/l/b/b;->b:Ljava/lang/String;

    return-void
.end method

.method public final b()J
    .locals 2

    .line 28
    iget-wide v0, p0, Lcom/tkay/core/common/l/b/b;->a:J

    return-wide v0
.end method

.method public run()V
    .locals 2

    .line 46
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/l/b/b;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/Thread;->setName(Ljava/lang/String;)V

    .line 52
    invoke-virtual {p0}, Lcom/tkay/core/common/l/b/b;->a()V

    return-void
.end method
