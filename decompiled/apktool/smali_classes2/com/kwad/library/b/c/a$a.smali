.class final Lcom/kwad/library/b/c/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/library/b/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private afg:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private afh:I

.field private afi:[Ljava/lang/StackTraceElement;

.field private afj:I

.field private afk:J


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/ref/WeakReference;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/library/b/c/a$a;->afg:Ljava/lang/ref/WeakReference;

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/library/b/c/a$a;->afh:I

    iput-object v1, p0, Lcom/kwad/library/b/c/a$a;->afi:[Ljava/lang/StackTraceElement;

    iput v0, p0, Lcom/kwad/library/b/c/a$a;->afj:I

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/library/b/c/a$a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/library/b/c/a$a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/library/b/c/a$a;->afk:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/library/b/c/a$a;)Ljava/lang/ref/WeakReference;
    .locals 0

    iget-object p0, p0, Lcom/kwad/library/b/c/a$a;->afg:Ljava/lang/ref/WeakReference;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/library/b/c/a$a;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/b/c/a$a;->afg:Ljava/lang/ref/WeakReference;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/library/b/c/a$a;[Ljava/lang/StackTraceElement;)[Ljava/lang/StackTraceElement;
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/b/c/a$a;->afi:[Ljava/lang/StackTraceElement;

    return-object p1
.end method

.method static synthetic b(Lcom/kwad/library/b/c/a$a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/library/b/c/a$a;->afk:J

    return-wide v0
.end method

.method static synthetic c(Lcom/kwad/library/b/c/a$a;)I
    .locals 2

    iget v0, p0, Lcom/kwad/library/b/c/a$a;->afh:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/kwad/library/b/c/a$a;->afh:I

    return v0
.end method

.method private clear()V
    .locals 2

    new-instance v0, Ljava/lang/ref/WeakReference;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/library/b/c/a$a;->afg:Ljava/lang/ref/WeakReference;

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/library/b/c/a$a;->afh:I

    iput-object v1, p0, Lcom/kwad/library/b/c/a$a;->afi:[Ljava/lang/StackTraceElement;

    iput v0, p0, Lcom/kwad/library/b/c/a$a;->afj:I

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/library/b/c/a$a;->afk:J

    return-void
.end method

.method static synthetic d(Lcom/kwad/library/b/c/a$a;)I
    .locals 0

    iget p0, p0, Lcom/kwad/library/b/c/a$a;->afh:I

    return p0
.end method

.method static synthetic e(Lcom/kwad/library/b/c/a$a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/library/b/c/a$a;->clear()V

    return-void
.end method

.method static synthetic f(Lcom/kwad/library/b/c/a$a;)[Ljava/lang/StackTraceElement;
    .locals 0

    iget-object p0, p0, Lcom/kwad/library/b/c/a$a;->afi:[Ljava/lang/StackTraceElement;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/library/b/c/a$a;)I
    .locals 2

    iget v0, p0, Lcom/kwad/library/b/c/a$a;->afj:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/kwad/library/b/c/a$a;->afj:I

    return v0
.end method

.method static synthetic h(Lcom/kwad/library/b/c/a$a;)I
    .locals 0

    iget p0, p0, Lcom/kwad/library/b/c/a$a;->afj:I

    return p0
.end method
