.class final Lcom/loc/gc$2;
.super Ljava/lang/ThreadLocal;
.source "Table.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/gc;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/ThreadLocal<",
        "Ljava/nio/charset/Charset;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/ThreadLocal;-><init>()V

    return-void
.end method

.method private static a()Ljava/nio/charset/Charset;
    .locals 1

    const-string v0, "UTF-8"

    invoke-static {v0}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method protected final synthetic initialValue()Ljava/lang/Object;
    .locals 1

    invoke-static {}, Lcom/loc/gc$2;->a()Ljava/nio/charset/Charset;

    move-result-object v0

    return-object v0
.end method
