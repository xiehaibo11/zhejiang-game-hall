.class final enum Lcom/kuaishou/weapon/p0/cp$a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kuaishou/weapon/p0/cp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kuaishou/weapon/p0/cp$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/kuaishou/weapon/p0/cp$a;

.field public static final enum b:Lcom/kuaishou/weapon/p0/cp$a;

.field private static final synthetic d:[Lcom/kuaishou/weapon/p0/cp$a;


# instance fields
.field c:I


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/kuaishou/weapon/p0/cp$a;

    const/4 v1, 0x0

    const-string v2, "DWORD"

    const/4 v3, 0x4

    invoke-direct {v0, v2, v1, v3}, Lcom/kuaishou/weapon/p0/cp$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kuaishou/weapon/p0/cp$a;->a:Lcom/kuaishou/weapon/p0/cp$a;

    new-instance v0, Lcom/kuaishou/weapon/p0/cp$a;

    const/4 v2, 0x1

    const-string v3, "QWORD"

    const/16 v4, 0x8

    invoke-direct {v0, v3, v2, v4}, Lcom/kuaishou/weapon/p0/cp$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kuaishou/weapon/p0/cp$a;->b:Lcom/kuaishou/weapon/p0/cp$a;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/kuaishou/weapon/p0/cp$a;

    sget-object v4, Lcom/kuaishou/weapon/p0/cp$a;->a:Lcom/kuaishou/weapon/p0/cp$a;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/kuaishou/weapon/p0/cp$a;->d:[Lcom/kuaishou/weapon/p0/cp$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/kuaishou/weapon/p0/cp$a;->c:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kuaishou/weapon/p0/cp$a;
    .locals 1

    const-class v0, Lcom/kuaishou/weapon/p0/cp$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kuaishou/weapon/p0/cp$a;

    return-object p0
.end method

.method public static values()[Lcom/kuaishou/weapon/p0/cp$a;
    .locals 1

    sget-object v0, Lcom/kuaishou/weapon/p0/cp$a;->d:[Lcom/kuaishou/weapon/p0/cp$a;

    invoke-virtual {v0}, [Lcom/kuaishou/weapon/p0/cp$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kuaishou/weapon/p0/cp$a;

    return-object v0
.end method
