.class public final Lcom/loc/dy;
.super Ljava/lang/Object;
.source "AmapContext.java"


# static fields
.field public static a:Z

.field private static volatile b:Lcom/loc/em;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a()V
    .locals 0

    return-void
.end method

.method public static a(Lcom/loc/em;)V
    .locals 0

    if-eqz p0, :cond_0

    sput-object p0, Lcom/loc/dy;->b:Lcom/loc/em;

    :cond_0
    return-void
.end method

.method public static b()Lcom/loc/em;
    .locals 1

    sget-object v0, Lcom/loc/dy;->b:Lcom/loc/em;

    return-object v0
.end method
