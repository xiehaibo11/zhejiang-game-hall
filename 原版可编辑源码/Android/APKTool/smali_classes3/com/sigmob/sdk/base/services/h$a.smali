.class Lcom/sigmob/sdk/base/services/h$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/services/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/sigmob/sdk/base/services/h;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/services/h;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/services/h;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/services/h$a;->a:Lcom/sigmob/sdk/base/services/h;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/sigmob/sdk/base/services/h;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/services/h$a;->a:Lcom/sigmob/sdk/base/services/h;

    return-object v0
.end method
