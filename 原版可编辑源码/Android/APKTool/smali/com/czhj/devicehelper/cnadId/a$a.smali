.class Lcom/czhj/devicehelper/cnadId/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/devicehelper/cnadId/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/czhj/devicehelper/cnadId/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/devicehelper/cnadId/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/czhj/devicehelper/cnadId/a;-><init>(Lcom/czhj/devicehelper/cnadId/a$1;)V

    sput-object v0, Lcom/czhj/devicehelper/cnadId/a$a;->a:Lcom/czhj/devicehelper/cnadId/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/czhj/devicehelper/cnadId/a;
    .locals 1

    sget-object v0, Lcom/czhj/devicehelper/cnadId/a$a;->a:Lcom/czhj/devicehelper/cnadId/a;

    return-object v0
.end method
