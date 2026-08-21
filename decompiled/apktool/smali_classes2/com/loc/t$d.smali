.class public final enum Lcom/loc/t$d;
.super Ljava/lang/Enum;
.source "Privacy.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/t;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "d"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/loc/t$d;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/loc/t$d;

.field public static final enum b:Lcom/loc/t$d;

.field public static final enum c:Lcom/loc/t$d;

.field private static final synthetic e:[Lcom/loc/t$d;


# instance fields
.field private d:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/loc/t$d;

    const/4 v1, 0x0

    const-string v2, "Unknow"

    const/4 v3, -0x1

    invoke-direct {v0, v2, v1, v3}, Lcom/loc/t$d;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$d;->a:Lcom/loc/t$d;

    new-instance v0, Lcom/loc/t$d;

    const/4 v2, 0x1

    const-string v3, "NotShow"

    invoke-direct {v0, v3, v2, v1}, Lcom/loc/t$d;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$d;->b:Lcom/loc/t$d;

    new-instance v0, Lcom/loc/t$d;

    const/4 v3, 0x2

    const-string v4, "DidShow"

    invoke-direct {v0, v4, v3, v2}, Lcom/loc/t$d;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/t$d;->c:Lcom/loc/t$d;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/loc/t$d;

    sget-object v5, Lcom/loc/t$d;->a:Lcom/loc/t$d;

    aput-object v5, v4, v1

    sget-object v1, Lcom/loc/t$d;->b:Lcom/loc/t$d;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/loc/t$d;->e:[Lcom/loc/t$d;

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

    iput p3, p0, Lcom/loc/t$d;->d:I

    return-void
.end method

.method public static a(I)Lcom/loc/t$d;
    .locals 1

    sget-object v0, Lcom/loc/t$d;->b:Lcom/loc/t$d;

    invoke-virtual {v0}, Lcom/loc/t$d;->a()I

    move-result v0

    if-ne p0, v0, :cond_0

    sget-object p0, Lcom/loc/t$d;->b:Lcom/loc/t$d;

    return-object p0

    :cond_0
    sget-object v0, Lcom/loc/t$d;->c:Lcom/loc/t$d;

    invoke-virtual {v0}, Lcom/loc/t$d;->a()I

    move-result v0

    if-ne p0, v0, :cond_1

    sget-object p0, Lcom/loc/t$d;->c:Lcom/loc/t$d;

    return-object p0

    :cond_1
    sget-object p0, Lcom/loc/t$d;->a:Lcom/loc/t$d;

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/loc/t$d;
    .locals 1

    const-class v0, Lcom/loc/t$d;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/loc/t$d;

    return-object p0
.end method

.method public static values()[Lcom/loc/t$d;
    .locals 1

    sget-object v0, Lcom/loc/t$d;->e:[Lcom/loc/t$d;

    invoke-virtual {v0}, [Lcom/loc/t$d;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/loc/t$d;

    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    iget v0, p0, Lcom/loc/t$d;->d:I

    return v0
.end method
