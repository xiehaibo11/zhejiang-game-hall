.class public Lcom/loc/en;
.super Ljava/lang/Object;
.source "Base64.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/en$b;,
        Lcom/loc/en$a;
    }
.end annotation


# static fields
.field static final synthetic a:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/loc/en;

    invoke-virtual {v0}, Ljava/lang/Class;->desiredAssertionStatus()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sput-boolean v0, Lcom/loc/en;->a:Z

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a([B)[B
    .locals 1

    array-length v0, p0

    invoke-static {p0, v0}, Lcom/loc/en;->a([BI)[B

    move-result-object p0

    return-object p0
.end method

.method private static a([BI)[B
    .locals 2

    new-instance v0, Lcom/loc/en$b;

    mul-int/lit8 v1, p1, 0x3

    div-int/lit8 v1, v1, 0x4

    new-array v1, v1, [B

    invoke-direct {v0, v1}, Lcom/loc/en$b;-><init>([B)V

    invoke-virtual {v0, p0, p1}, Lcom/loc/en$b;->a([BI)Z

    move-result p0

    if-eqz p0, :cond_1

    iget p0, v0, Lcom/loc/en$b;->b:I

    iget-object p1, v0, Lcom/loc/en$b;->a:[B

    array-length p1, p1

    if-ne p0, p1, :cond_0

    iget-object p0, v0, Lcom/loc/en$b;->a:[B

    return-object p0

    :cond_0
    iget p0, v0, Lcom/loc/en$b;->b:I

    new-array p0, p0, [B

    iget-object p1, v0, Lcom/loc/en$b;->a:[B

    iget v0, v0, Lcom/loc/en$b;->b:I

    const/4 v1, 0x0

    invoke-static {p1, v1, p0, v1, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object p0

    :cond_1
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string p1, "bad base-64"

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method
