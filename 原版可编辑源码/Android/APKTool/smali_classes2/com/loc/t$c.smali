.class public final enum Lcom/loc/t$c;
.super Ljava/lang/Enum;
.source "Privacy.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/t;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "c"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/loc/t$c;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/loc/t$c;

.field public static final enum b:Lcom/loc/t$c;

.field public static final enum c:Lcom/loc/t$c;

.field public static final enum d:Lcom/loc/t$c;

.field public static final enum e:Lcom/loc/t$c;

.field public static final enum f:Lcom/loc/t$c;

.field public static final enum g:Lcom/loc/t$c;

.field public static final enum h:Lcom/loc/t$c;

.field public static final enum i:Lcom/loc/t$c;

.field private static final synthetic k:[Lcom/loc/t$c;


# instance fields
.field private final j:I


# direct methods
.method static constructor <clinit>()V
    .locals 12

    new-instance v0, Lcom/loc/t$c;

    const/4 v1, 0x0

    const-string v2, "SuccessCode"

    invoke-direct {v0, v2, v1, v1}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->a:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/4 v2, 0x1

    const-string v3, "ShowUnknowCode"

    const v4, 0x87a32

    invoke-direct {v0, v3, v2, v4}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->b:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/4 v3, 0x2

    const-string v4, "ShowNoShowCode"

    const v5, 0x87a33

    invoke-direct {v0, v4, v3, v5}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->c:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/4 v4, 0x3

    const-string v5, "InfoUnknowCode"

    const v6, 0x87a34

    invoke-direct {v0, v5, v4, v6}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->d:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/4 v5, 0x4

    const-string v6, "InfoNotContainCode"

    const v7, 0x87a35

    invoke-direct {v0, v6, v5, v7}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->e:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/4 v6, 0x5

    const-string v7, "AgreeUnknowCode"

    const v8, 0x87a36

    invoke-direct {v0, v7, v6, v8}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->f:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/4 v7, 0x6

    const-string v8, "AgreeNotAgreeCode"

    const v9, 0x87a37

    invoke-direct {v0, v8, v7, v9}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->g:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/4 v8, 0x7

    const-string v9, "InvaildUserKeyCode"

    const/16 v10, 0x2711

    invoke-direct {v0, v9, v8, v10}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->h:Lcom/loc/t$c;

    new-instance v0, Lcom/loc/t$c;

    const/16 v9, 0x8

    const-string v10, "IllegalArgument"

    const/16 v11, 0x4e21

    invoke-direct {v0, v10, v9, v11}, Lcom/loc/t$c;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$c;->i:Lcom/loc/t$c;

    const/16 v10, 0x9

    new-array v10, v10, [Lcom/loc/t$c;

    sget-object v11, Lcom/loc/t$c;->a:Lcom/loc/t$c;

    aput-object v11, v10, v1

    sget-object v1, Lcom/loc/t$c;->b:Lcom/loc/t$c;

    aput-object v1, v10, v2

    sget-object v1, Lcom/loc/t$c;->c:Lcom/loc/t$c;

    aput-object v1, v10, v3

    sget-object v1, Lcom/loc/t$c;->d:Lcom/loc/t$c;

    aput-object v1, v10, v4

    sget-object v1, Lcom/loc/t$c;->e:Lcom/loc/t$c;

    aput-object v1, v10, v5

    sget-object v1, Lcom/loc/t$c;->f:Lcom/loc/t$c;

    aput-object v1, v10, v6

    sget-object v1, Lcom/loc/t$c;->g:Lcom/loc/t$c;

    aput-object v1, v10, v7

    sget-object v1, Lcom/loc/t$c;->h:Lcom/loc/t$c;

    aput-object v1, v10, v8

    aput-object v0, v10, v9

    sput-object v10, Lcom/loc/t$c;->k:[Lcom/loc/t$c;

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

    iput p3, p0, Lcom/loc/t$c;->j:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/loc/t$c;
    .locals 1

    const-class v0, Lcom/loc/t$c;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/loc/t$c;

    return-object p0
.end method

.method public static values()[Lcom/loc/t$c;
    .locals 1

    sget-object v0, Lcom/loc/t$c;->k:[Lcom/loc/t$c;

    invoke-virtual {v0}, [Lcom/loc/t$c;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/loc/t$c;

    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    iget v0, p0, Lcom/loc/t$c;->j:I

    return v0
.end method
