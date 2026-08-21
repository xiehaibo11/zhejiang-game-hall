.class final Lcom/tkay/expressad/reward/a/e$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/tkay/expressad/reward/a/e;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 60
    new-instance v0, Lcom/tkay/expressad/reward/a/e;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/reward/a/e;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/reward/a/e$a;->a:Lcom/tkay/expressad/reward/a/e;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/reward/a/e;
    .locals 1

    .line 59
    sget-object v0, Lcom/tkay/expressad/reward/a/e$a;->a:Lcom/tkay/expressad/reward/a/e;

    return-object v0
.end method
