.class public final enum Lcom/loc/bt$b;
.super Ljava/lang/Enum;
.source "Request.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/bt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/loc/bt$b;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/loc/bt$b;

.field public static final enum b:Lcom/loc/bt$b;

.field public static final enum c:Lcom/loc/bt$b;

.field public static final enum d:Lcom/loc/bt$b;

.field public static final enum e:Lcom/loc/bt$b;

.field public static final enum f:Lcom/loc/bt$b;

.field public static final enum g:Lcom/loc/bt$b;

.field private static final synthetic i:[Lcom/loc/bt$b;


# instance fields
.field private h:I


# direct methods
.method static constructor <clinit>()V
    .locals 10

    new-instance v0, Lcom/loc/bt$b;

    const/4 v1, 0x0

    const-string v2, "FIRST_NONDEGRADE"

    invoke-direct {v0, v2, v1, v1}, Lcom/loc/bt$b;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$b;->a:Lcom/loc/bt$b;

    new-instance v0, Lcom/loc/bt$b;

    const/4 v2, 0x1

    const-string v3, "NEVER_GRADE"

    invoke-direct {v0, v3, v2, v2}, Lcom/loc/bt$b;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$b;->b:Lcom/loc/bt$b;

    new-instance v0, Lcom/loc/bt$b;

    const/4 v3, 0x2

    const-string v4, "DEGRADE_BYERROR"

    invoke-direct {v0, v4, v3, v3}, Lcom/loc/bt$b;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$b;->c:Lcom/loc/bt$b;

    new-instance v0, Lcom/loc/bt$b;

    const/4 v4, 0x3

    const-string v5, "DEGRADE_ONLY"

    invoke-direct {v0, v5, v4, v4}, Lcom/loc/bt$b;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$b;->d:Lcom/loc/bt$b;

    new-instance v0, Lcom/loc/bt$b;

    const/4 v5, 0x4

    const-string v6, "FIX_NONDEGRADE"

    invoke-direct {v0, v6, v5, v5}, Lcom/loc/bt$b;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$b;->e:Lcom/loc/bt$b;

    new-instance v0, Lcom/loc/bt$b;

    const/4 v6, 0x5

    const-string v7, "FIX_DEGRADE_BYERROR"

    invoke-direct {v0, v7, v6, v6}, Lcom/loc/bt$b;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$b;->f:Lcom/loc/bt$b;

    new-instance v0, Lcom/loc/bt$b;

    const/4 v7, 0x6

    const-string v8, "FIX_DEGRADE_ONLY"

    invoke-direct {v0, v8, v7, v7}, Lcom/loc/bt$b;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/loc/bt$b;->g:Lcom/loc/bt$b;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/loc/bt$b;

    sget-object v9, Lcom/loc/bt$b;->a:Lcom/loc/bt$b;

    aput-object v9, v8, v1

    sget-object v1, Lcom/loc/bt$b;->b:Lcom/loc/bt$b;

    aput-object v1, v8, v2

    sget-object v1, Lcom/loc/bt$b;->c:Lcom/loc/bt$b;

    aput-object v1, v8, v3

    sget-object v1, Lcom/loc/bt$b;->d:Lcom/loc/bt$b;

    aput-object v1, v8, v4

    sget-object v1, Lcom/loc/bt$b;->e:Lcom/loc/bt$b;

    aput-object v1, v8, v5

    sget-object v1, Lcom/loc/bt$b;->f:Lcom/loc/bt$b;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/loc/bt$b;->i:[Lcom/loc/bt$b;

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

    iput p3, p0, Lcom/loc/bt$b;->h:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/loc/bt$b;
    .locals 1

    const-class v0, Lcom/loc/bt$b;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/loc/bt$b;

    return-object p0
.end method

.method public static values()[Lcom/loc/bt$b;
    .locals 1

    sget-object v0, Lcom/loc/bt$b;->i:[Lcom/loc/bt$b;

    invoke-virtual {v0}, [Lcom/loc/bt$b;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/loc/bt$b;

    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    iget v0, p0, Lcom/loc/bt$b;->h:I

    return v0
.end method

.method public final b()Z
    .locals 2

    iget v0, p0, Lcom/loc/bt$b;->h:I

    sget-object v1, Lcom/loc/bt$b;->a:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-eq v0, v1, :cond_1

    sget-object v1, Lcom/loc/bt$b;->b:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-eq v0, v1, :cond_1

    sget-object v1, Lcom/loc/bt$b;->e:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final c()Z
    .locals 2

    iget v0, p0, Lcom/loc/bt$b;->h:I

    sget-object v1, Lcom/loc/bt$b;->c:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-eq v0, v1, :cond_1

    sget-object v1, Lcom/loc/bt$b;->d:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-eq v0, v1, :cond_1

    sget-object v1, Lcom/loc/bt$b;->f:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-eq v0, v1, :cond_1

    sget-object v1, Lcom/loc/bt$b;->g:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final d()Z
    .locals 2

    iget v0, p0, Lcom/loc/bt$b;->h:I

    sget-object v1, Lcom/loc/bt$b;->c:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-eq v0, v1, :cond_1

    sget-object v1, Lcom/loc/bt$b;->f:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final e()Z
    .locals 2

    iget v0, p0, Lcom/loc/bt$b;->h:I

    sget-object v1, Lcom/loc/bt$b;->b:Lcom/loc/bt$b;

    iget v1, v1, Lcom/loc/bt$b;->h:I

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
