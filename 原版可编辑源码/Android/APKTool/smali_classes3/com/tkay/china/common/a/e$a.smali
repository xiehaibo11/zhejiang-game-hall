.class public final enum Lcom/tkay/china/common/a/e$a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/common/a/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/tkay/china/common/a/e$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/tkay/china/common/a/e$a;

.field public static final enum b:Lcom/tkay/china/common/a/e$a;

.field public static final enum c:Lcom/tkay/china/common/a/e$a;

.field public static final enum d:Lcom/tkay/china/common/a/e$a;

.field public static final enum e:Lcom/tkay/china/common/a/e$a;

.field public static final enum f:Lcom/tkay/china/common/a/e$a;

.field public static final enum g:Lcom/tkay/china/common/a/e$a;

.field private static final synthetic h:[Lcom/tkay/china/common/a/e$a;


# direct methods
.method static constructor <clinit>()V
    .locals 10

    .line 79
    new-instance v0, Lcom/tkay/china/common/a/e$a;

    const/4 v1, 0x0

    const-string v2, "IDLE"

    invoke-direct {v0, v2, v1}, Lcom/tkay/china/common/a/e$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/china/common/a/e$a;->a:Lcom/tkay/china/common/a/e$a;

    .line 80
    new-instance v0, Lcom/tkay/china/common/a/e$a;

    const/4 v2, 0x1

    const-string v3, "LOADING"

    invoke-direct {v0, v3, v2}, Lcom/tkay/china/common/a/e$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/china/common/a/e$a;->b:Lcom/tkay/china/common/a/e$a;

    .line 81
    new-instance v0, Lcom/tkay/china/common/a/e$a;

    const/4 v3, 0x2

    const-string v4, "PAUSE"

    invoke-direct {v0, v4, v3}, Lcom/tkay/china/common/a/e$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/china/common/a/e$a;->c:Lcom/tkay/china/common/a/e$a;

    .line 82
    new-instance v0, Lcom/tkay/china/common/a/e$a;

    const/4 v4, 0x3

    const-string v5, "STOP"

    invoke-direct {v0, v5, v4}, Lcom/tkay/china/common/a/e$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/china/common/a/e$a;->d:Lcom/tkay/china/common/a/e$a;

    .line 83
    new-instance v0, Lcom/tkay/china/common/a/e$a;

    const/4 v5, 0x4

    const-string v6, "FINISH"

    invoke-direct {v0, v6, v5}, Lcom/tkay/china/common/a/e$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/china/common/a/e$a;->e:Lcom/tkay/china/common/a/e$a;

    .line 84
    new-instance v0, Lcom/tkay/china/common/a/e$a;

    const/4 v6, 0x5

    const-string v7, "FAIL"

    invoke-direct {v0, v7, v6}, Lcom/tkay/china/common/a/e$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/china/common/a/e$a;->f:Lcom/tkay/china/common/a/e$a;

    .line 85
    new-instance v0, Lcom/tkay/china/common/a/e$a;

    const/4 v7, 0x6

    const-string v8, "INSTALLED"

    invoke-direct {v0, v8, v7}, Lcom/tkay/china/common/a/e$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/china/common/a/e$a;->g:Lcom/tkay/china/common/a/e$a;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/tkay/china/common/a/e$a;

    .line 78
    sget-object v9, Lcom/tkay/china/common/a/e$a;->a:Lcom/tkay/china/common/a/e$a;

    aput-object v9, v8, v1

    sget-object v1, Lcom/tkay/china/common/a/e$a;->b:Lcom/tkay/china/common/a/e$a;

    aput-object v1, v8, v2

    sget-object v1, Lcom/tkay/china/common/a/e$a;->c:Lcom/tkay/china/common/a/e$a;

    aput-object v1, v8, v3

    sget-object v1, Lcom/tkay/china/common/a/e$a;->d:Lcom/tkay/china/common/a/e$a;

    aput-object v1, v8, v4

    sget-object v1, Lcom/tkay/china/common/a/e$a;->e:Lcom/tkay/china/common/a/e$a;

    aput-object v1, v8, v5

    sget-object v1, Lcom/tkay/china/common/a/e$a;->f:Lcom/tkay/china/common/a/e$a;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/tkay/china/common/a/e$a;->h:[Lcom/tkay/china/common/a/e$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 78
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/tkay/china/common/a/e$a;
    .locals 1

    .line 78
    const-class v0, Lcom/tkay/china/common/a/e$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/tkay/china/common/a/e$a;

    return-object p0
.end method

.method public static values()[Lcom/tkay/china/common/a/e$a;
    .locals 1

    .line 78
    sget-object v0, Lcom/tkay/china/common/a/e$a;->h:[Lcom/tkay/china/common/a/e$a;

    invoke-virtual {v0}, [Lcom/tkay/china/common/a/e$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/china/common/a/e$a;

    return-object v0
.end method
